using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Xml;

public partial class Chapter_10_GBwrite : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (!IsPostBack)
            TextBox5.Text = Session["begintime"] + "";
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        //1.XML 파일 열기
        string fn = Server.MapPath("~/App_Data/guestbook.xml");
        XmlDocument doc = new XmlDocument();
        doc.Load(fn);

        //2. <guest> 노드 생성하고, 루트 노드에 추가
        XmlNode root = doc.DocumentElement;
        XmlNode guestnode = doc.CreateElement("guest");
        root.AppendChild(guestnode);

        XmlAttribute name;
        name = doc.CreateAttribute("name");
        name.Value = TextBox1.Text;
        guestnode.Attributes.Append(name);

        XmlAttribute email;
        email = doc.CreateAttribute("email");
        email.Value = TextBox2.Text;
        guestnode.Attributes.Append(email);

        XmlAttribute title;
        title = doc.CreateAttribute("title");
        title.Value = TextBox3.Text;
        guestnode.Attributes.Append(title);

        XmlAttribute body;
        body = doc.CreateAttribute("body");
        body.Value = TextBox4.Text;
        guestnode.Attributes.Append(body);

        XmlAttribute time;
        time = doc.CreateAttribute("time");
        time.Value = TextBox5.Text;
        guestnode.Attributes.Append(time);

        doc.Save(fn);
        doc = null;

        Response.Redirect("GBList.aspx");
    }
}