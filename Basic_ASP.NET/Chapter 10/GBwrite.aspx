<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="GBwrite.aspx.cs" Inherits="Chapter_10_GBwrite" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
    </p>
    <p>
        이름 :
        <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
&nbsp; 이메일 :
        <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
    </p>
    <p>
        제목 :
        <asp:TextBox ID="TextBox3" runat="server"></asp:TextBox>
&nbsp; 작성 시간 :
        <asp:TextBox ID="TextBox5" runat="server" Enabled="False"></asp:TextBox>
    </p>
    <p>
        &nbsp;</p>
    <p>
        내용 <asp:TextBox ID="TextBox4" runat="server" Height="133px" TextMode="MultiLine" Width="335px"></asp:TextBox>
    </p>
    <p>
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Button" />
    </p>
    <p>
    </p>
</asp:Content>

