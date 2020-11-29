package safetia;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import common.DBConnection;

public class CodingTest {

	public static void main(String[] args) {

		int sus_01_p_seq = 1;

		Sus_02 sus_02 = new Sus_02();
		sus_02.setsus_02_p_seq(sus_01_p_seq);
		sus_02.setsus_02_p_name("");
		sus_02.setsus_02_p_price(1);
		sus_02.setsus_02_p_quantity(1);
		sus_02.setsus_02_p_desc("");

		solution(sus_01_p_seq, sus_02);
	}

	/*
	 * public static void solution(int sus_01_p_seq) throws SQLException {
	 * Connection connection = null; PreparedStatement preparedStatement = null; try
	 * { connection = DBConnection.getConnection(); String selectSql =
	 * "SELECT sus_02_p_SEQ FROM SUS_02 WHERE sus_02_p_SEQ = ?"; preparedStatement =
	 * connection.prepareStatement(selectSql); preparedStatement.setInt(1,
	 * sus_01_p_seq); ResultSet resultSet = preparedStatement.executeQuery(); if
	 * (resultSet.next()) { preparedStatement.close(); String updateSql =
	 * "UPDATE SUS_02 SET ,sus_02_p_NAME=?,sus_02_p_PRICE=? WHERE sus_02_p_SEQ=?";
	 * preparedStatement = connection.prepareStatement(updateSql);
	 * preparedStatement.setString(1, sus_02_p_name); preparedStatement.setInt(2,
	 * sus_02_p_price); preparedStatement.setInt(3, sus_02_p_seq); int result =
	 * preparedStatement.executeUpdate(); System.out.printf("%d번 제품 정보 갱신",
	 * sus_02_p_seq); System.out.println(result > 0 ? "성공" : "실패");
	 * preparedStatement.execute(); } else { preparedStatement.close(); String
	 * insertSql =
	 * "INSERT INTO SUS_02 (sus_02_p_SEQ,sus_02_p_NAME,sus_02_p_PRICE)VALUES(?,?,?)"
	 * ; preparedStatement = connection.prepareStatement(insertSql);
	 * preparedStatement.setInt(1, sus_02_p_seq); preparedStatement.setString(2,
	 * sus_02_p_name); preparedStatement.setInt(3, sus_02_p_price); int result =
	 * preparedStatement.executeUpdate(); System.out.printf("%d번 제품 정보 입력",
	 * sus_02_p_seq); System.out.println(result > 0 ? "성공" : "실패"); } } catch
	 * (SQLException e) { e.printStackTrace(); } finally { if (preparedStatement !=
	 * null) { if (!preparedStatement.isClosed()) { preparedStatement.close(); } }
	 * DBConnection.close(); } }
	 */

	private static void solution(int sus_01_p_seq, Sus_02 sus_02) {
		Sus_01 sus_01 = search(sus_01_p_seq);

		if (sus_01 != null) {
			Connection connection = DBConnection.getConnection();
			PreparedStatement preparedStatement = null;
			String searchSus_02 = "SELECT*FROM SUS_02 WHERE SUP_02_P_SEQ=?";
			try {
				preparedStatement = connection.prepareStatement(searchSus_02);
				preparedStatement.setInt(1, sus_01.getSus_01_p_seq());
				ResultSet resultSet = preparedStatement.executeQuery();
				if (resultSet.next()) {
					System.out.println(update(sus_02) != 0 ? "" : "");
				} else {
					System.out.println(insert(sus_02) != 0 ? "" : "");
				}
			} catch (SQLException e) {
				e.printStackTrace();
			} finally {
				try {
					preparedStatement.close();
				} catch (SQLException e) {
					e.printStackTrace();
				}
			}
		} else {
			System.out.printf("제품번호 %d 제품에 대한 정보가 없습니다.", sus_01_p_seq);
		}

	}

	private static Sus_01 search(int sus_01_p_seq) {
		Connection connection = DBConnection.getConnection();
		PreparedStatement preparedStatement = null;

		String searchSus_01 = "SELECT SUS_01_P_SEQ,SUS_01_P_NAME,SUS_01_P_PRICE,SUS_01_P_QUANTITY,SUS_01_P_DESC FROM SUS_01 WHERE SUS_01_P_SEQ=?";
		Sus_01 sus_01 = new Sus_01();
		System.out.println(searchSus_01);
		try {
			preparedStatement = connection.prepareStatement(searchSus_01);
			preparedStatement.setInt(1, sus_01_p_seq);
			ResultSet resultSet = preparedStatement.executeQuery();
			if (resultSet.next()) {
				sus_01.setSus_01_p_seq(resultSet.getInt(1));
				sus_01.setSus_01_p_name(resultSet.getString(2));
				sus_01.setSus_01_p_price(resultSet.getInt(3));
				sus_01.setSus_01_p_quantity(resultSet.getInt(4));
				sus_01.setSus_01_p_desc(resultSet.getString(5));
			} else {
				sus_01 = null;
			}
		} catch (SQLException e) {
			e.printStackTrace();
		} finally {
			try {
				preparedStatement.close();
			} catch (SQLException e) {
				e.printStackTrace();
			}
		}
		return sus_01;
	}

	private static int insert(Sus_02 sus_02) {

		return 0;
	}

	private static int update(Sus_02 sus_02) {
		return 0;
	}

}