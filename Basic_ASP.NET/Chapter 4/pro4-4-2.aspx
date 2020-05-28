<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="pro4-4-2.aspx.cs" Inherits="Chapter_4_pro4_4_2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
    &nbsp;&nbsp;<asp:TextBox ID="TextBox1" runat="server" AutoPostBack="True"></asp:TextBox>
</p>
<p>
    &nbsp;&nbsp;<asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
</p>
<p>
&nbsp; &nbsp;<asp:Button ID="Button1" runat="server" Text="확 인" Width="73px" />
</p>
</asp:Content>

