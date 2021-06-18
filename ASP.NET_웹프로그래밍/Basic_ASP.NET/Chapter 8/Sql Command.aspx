<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="Sql Command.aspx.cs" Inherits="Chapter_8_Sql_Command" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
    </p>
    <p>
        SQL COMMAND를 입력하세요!</p>
    <p>
        <asp:TextBox ID="TextBox1" runat="server" Height="231px" TextMode="MultiLine" Width="631px"></asp:TextBox>
    </p>
    <p>
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="SQL COMMAND 수행" style="height: 21px" />
    &nbsp;<asp:Button ID="Button2" runat="server" OnClick="Button2_Click" Text="COMMAND 입력창 비우기" />
    </p>
    <p>
        <asp:Label ID="Label1" runat="server" Text="SQL 수행 결과"></asp:Label>
    </p>
    <p>
    </p>
</asp:Content>

