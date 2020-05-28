using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;

public partial class Chapter_8_Select_All : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        // 자신 PC의 SQLEXPRESS를 DB서버로 지정하고 사용 데이터베이스는 VS2015???  로 지정 
        string connectionString = "server=(local)\\SQLExpress;Integrated Security=true;database=vs2016wed2";
        SqlConnection conn = new SqlConnection(connectionString);

        // SQL COMMAND OBJECT를 만들고  SQL COMMAND 넣기
        SqlCommand Cmd = new SqlCommand();
        Cmd.Connection = conn;
        Cmd.CommandText = "select * From Userdb";

        // SQL COMMAND 수행하기
        conn.Open();
        // ExecuteReader()는 SELECT 문을 사용하여 RECORD를 가져올때 사용
        SqlDataReader reader = Cmd.ExecuteReader();

        // SqlDataReader의 기본 위치는 첫 번째 레코드 앞, Read( )를 호출하여 하나의 레코드 읽기 
        // read.Read( )의 반환 값 형식: Boolean, 행이 더 있으면 true이고, 그렇지 않으면 false입니다.

        while (reader.Read())
        {
            TableRow r = new TableRow();

            // 필드(  name ) 값 추출하여 테이블 cell에 넣기
            TableCell c1 = new TableCell();
            c1.Controls.Add(new LiteralControl(reader["name"].ToString()));
            r.Cells.Add(c1);
            // 필드(  id ) 값 추출하여 테이블 cell에 넣기
            TableCell c2 = new TableCell();
            c2.Controls.Add(new LiteralControl(reader["id"].ToString()));
            r.Cells.Add(c2);
            // 필드(  email ) 값 추출하여 테이블 cell에 넣기
            TableCell c3 = new TableCell();
            c3.Controls.Add(new LiteralControl(reader["email"].ToString()));
            r.Cells.Add(c3);
            // 필드(  sex  ) 값 추출하여 테이블 cell에 넣기
            TableCell c4 = new TableCell();
            c4.Controls.Add(new LiteralControl(reader["sex"].ToString()));
            r.Cells.Add(c4);
            // 필드(  level  ) 값 추출하여 테이블 cell에 넣기
            TableCell c5 = new TableCell();
            c5.Controls.Add(new LiteralControl(reader["level"].ToString()));
            r.Cells.Add(c5);
            // 필드(  mileage  ) 값 추출하여 테이블 cell에 넣기
            TableCell c6 = new TableCell();
            c6.Controls.Add(new LiteralControl(reader["mileage"].ToString()));
            r.Cells.Add(c6);

            Table1.Rows.Add(r);
        }
        conn.Close();
    }
}