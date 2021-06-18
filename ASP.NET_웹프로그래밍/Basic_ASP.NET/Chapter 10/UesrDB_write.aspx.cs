using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Xml;
public partial class Chapter_10_UesrDB_write : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (!IsPostBack)
        {
            TextBox1.Text = "당현아";
            TextBox2.Text = "20163131";
        }
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        //1.XML 파일 열기
        string fn = Server.MapPath("~/App_Data/userdb.xml");
        XmlDocument doc = new XmlDocument();
        doc.Load(fn);

        //2. <guest> 노드 생성하고, 루트 노드에 추가
        XmlNode root = doc.DocumentElement;
        XmlNode guestnode = doc.CreateElement("userdb");
        root.AppendChild(guestnode);

        XmlAttribute name;
        name = doc.CreateAttribute("name");
        name.Value = TextBox1.Text;
        guestnode.Attributes.Append(name);

        XmlAttribute id;
        id = doc.CreateAttribute("id");
        id.Value = TextBox2.Text;
        guestnode.Attributes.Append(id);

        XmlAttribute email;
        email = doc.CreateAttribute("email");
        email.Value = TextBox3.Text;
        guestnode.Attributes.Append(email);

        XmlAttribute sex;
        sex = doc.CreateAttribute("sex");
        sex.Value = TextBox4.Text;
        guestnode.Attributes.Append(sex);

        XmlAttribute mileage;
        mileage = doc.CreateAttribute("mileage");
        mileage.Value = TextBox5.Text;
        guestnode.Attributes.Append(mileage);

        XmlAttribute level;
        level = doc.CreateAttribute("level");
        level.Value = TextBox6.Text;
        guestnode.Attributes.Append(level);

        XmlAttribute time;
        time = doc.CreateAttribute("time");
        time.Value = Session["begintime"] + "";
        guestnode.Attributes.Append(time);

        doc.Save(fn);
        doc = null;

        Response.Redirect("UserDB_List.aspx");
    }
}