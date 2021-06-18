<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="pro5-3-2.aspx.cs" Inherits="Chapter_5_pro5_3_2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
    </p>
    <p>
        <asp:ImageButton ID="ImageButton1" runat="server" 
            ImageUrl="~/image/golf_menu.jpg" onclick="ImageButton1_Click" />
    </p>
    <p>
        &nbsp;</p>
    <p>
        메뉴를 선택하세요.</p>
    <p>
        <asp:Label ID="Label1" runat="server" Text="선택한 메뉴"></asp:Label>
    </p>
    <p>
        <asp:Label ID="Label2" runat="server"></asp:Label>
    </p>
    <p>
    </p>
</asp:Content>

