<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="pro 6-2-1.aspx.cs" Inherits="Chapter_6_pro_6_2_1" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
    </p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p style="text-align: center">
        <asp:Label ID="Label1" runat="server" style="z-index: 1; left: 410px; top: 188px; position: absolute; height: 16px; width: 32px" Text="이름"></asp:Label>
        <asp:TextBox ID="TextBox1" runat="server" Enabled="False" style="z-index: 1; left: 453px; top: 188px; position: absolute">당현아</asp:TextBox>
        <asp:DropDownList ID="DropDownList1" runat="server" AutoPostBack="True" OnSelectedIndexChanged="DropDownList1_SelectedIndexChanged" style="z-index: 1; left: 618px; top: 188px; position: absolute; height: 19px; width: 202px">
        </asp:DropDownList>
        당현아 수강신청 목록</p>
    <p style="text-align: center">
        <asp:ListBox ID="ListBox1" runat="server" Height="170px" Width="165px"></asp:ListBox>
&nbsp;
        <asp:ListBox ID="ListBox2" runat="server" Height="169px" Width="118px"></asp:ListBox>
    </p>
    <p style="text-align: center">
        <asp:Label ID="Label2" runat="server" Text="계 : 0학점"></asp:Label>
    </p>
    <p>
    </p>
    <p>
    </p>
</asp:Content>

