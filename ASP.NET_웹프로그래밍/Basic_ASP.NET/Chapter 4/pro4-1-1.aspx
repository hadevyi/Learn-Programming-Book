<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="pro4-1-1.aspx.cs" Inherits="Chapter_4_pro4_1_1" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
    <br />
</p>
<p>
    <asp:TextBox ID="TextBox1" runat="server" Width="164px">안녕하세요! 웹폼입니다.</asp:TextBox>
</p>
<p>
    <asp:Button ID="Button1" runat="server" Text="누 르 기 " Width="167px" />
</p>
<p>
    <asp:Label ID="Label1" runat="server" Text="입력 내용 : "></asp:Label>
</p>
<p>
</p>
</asp:Content>

