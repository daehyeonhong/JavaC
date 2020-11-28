package safetia;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class CodingTest {

	public static void main(String[] args) {
		Solution solution = new Solution();
		solution.solution(3, "2", 5000);
	}

}

class Solution {

	public void solution(int p_seq, String p_name, int p_price) {
		Connection connection = null;
		PreparedStatement preparedStatement = null;
		try {
			String url = "jdbc:oracle:thin:@127.0.0.1:1521:xe";
			Class.forName("oracle.jdbc.driver.OracleDriver");
			connection = DriverManager.getConnection(url, "portfolio", "1234");
			String selectSql = "SELECT P_SEQ FROM SUS_02 WHERE P_SEQ = ?";
			preparedStatement = connection.prepareStatement(selectSql);
			preparedStatement.setInt(1, p_seq);
			ResultSet resultSet = preparedStatement.executeQuery();
			if (resultSet.next()) {
				String updateSql = "UPDATE SUS_02 SET P_SEQ=?,P_NAME=?,P_PRICE=? WHERE P_SEQ=?";
				preparedStatement = connection.prepareStatement(updateSql);
				preparedStatement.setInt(1, p_seq);
				preparedStatement.setString(2, p_name);
				preparedStatement.setInt(3, p_price);
				preparedStatement.setInt(4, p_seq);
				int result = preparedStatement.executeUpdate();
				System.out.printf("%d번 제품 정보 갱신", p_seq);
				System.out.println(result > 0 ? "성공" : "실패");
				preparedStatement.execute();
			} else {
				String insertSql = "INSERT INTO SUS_02 (P_SEQ,P_NAME,P_PRICE)VALUES(?,?,?)";
				preparedStatement = connection.prepareStatement(insertSql);
				preparedStatement.setInt(1, p_seq);
				preparedStatement.setString(2, p_name);
				preparedStatement.setInt(3, p_price);
				int result = preparedStatement.executeUpdate();
				System.out.printf("%d번 제품 정보 입력", p_seq);
				System.out.println(result > 0 ? "성공" : "실패");
			}
		} catch (ClassNotFoundException | SQLException e) {
			e.printStackTrace();
		} finally {
			if (preparedStatement != null) {
				try {
					preparedStatement.close();
				} catch (SQLException e) {
					e.printStackTrace();
				}
			}
			if (connection != null) {
				try {
					connection.close();
				} catch (SQLException e) {
					e.printStackTrace();
				}
			}
		}
	}

}