using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient; // 앞으로 계속 필요

public partial class Chapter_8_Sql_Command : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (!IsPostBack)
        {
            TextBox1.Text = "DELETE FROM vs2016wed WHERE ID='hyun' ;INSERT INTO vs2016wed(NAME, ID, EMAILL, SEX, MILAGE, LEVEL) VALUES('허윤정', 'hyun', 'hyun@honam.ac.kr', 'F', 3500, 'B')";
        }
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        // 자신 PC의 SQLEXPRESS를 DB서버로 지정하고 사용 데이터베이스는 VS2015???  로 지정 
        string connectionString = "server=(local)\\SQLExpress;Integrated Security=true;database=vs2016wed";
        SqlConnection conn = new SqlConnection(connectionString);

        // SQL COMMAND OBJECT를 만들고  SQL COMMAND 넣기
        SqlCommand Cmd = new SqlCommand();
        Cmd.Connection = conn;
        Cmd.CommandText = TextBox1.Text; // -------얘(TextBox1)만 다름-------------

        // SQL COMMAND 수행하기
        conn.Open();
        // ExecuteNonQuery()문은 CREATE, ALTER, DROP, INSERT, UPDATE, DELETE 문을 수행할때 사용
        // 리턴 값은 영향을 받은 ROW의 갯수
        int rowsAffected = Cmd.ExecuteNonQuery();
        conn.Close();

        Label1.Text += "\n" + rowsAffected + "개의 행이 영향을 받았습니다.</br>" + TextBox1.Text;
    }
    protected void Button2_Click(object sender, EventArgs e)
    {
        TextBox1.Text="";
        Label1.Text="";
    }
}