<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="GBList.aspx.cs" Inherits="Chapter_10_GBList" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
        <asp:DataList ID="DataList1" runat="server" BackColor="White" BorderColor="#CC9966" BorderStyle="None" BorderWidth="1px" CellPadding="4" DataSourceID="XmlDataSource1" GridLines="Both">
            <FooterStyle BackColor="#FFFFCC" ForeColor="#330099" />
            <HeaderStyle BackColor="#990000" Font-Bold="True" ForeColor="#FFFFCC" />
            <ItemStyle BackColor="White" ForeColor="#330099" />
            <ItemTemplate>
                <asp:Label ID="titleLabel" runat="server" Text='<%# Eval("title") %>' />
                <br />
                <br />
                작성자 :
                <asp:Label ID="nameLabel" runat="server" Text='<%# Eval("name") %>' />
                &nbsp;(<asp:Label ID="emailLabel" runat="server" Text='<%# Eval("email") %>' />
                )<br />
                날짜 :
                <asp:Label ID="timeLabel" runat="server" Text='<%# Eval("time") %>' />
                <br />
                내용: <br />
                <asp:Label ID="bodyLabel" runat="server" Text='<%# Eval("body") %>' />
<br />
            </ItemTemplate>
            <SelectedItemStyle BackColor="#FFCC66" Font-Bold="True" ForeColor="#663399" />
        </asp:DataList>
        <asp:XmlDataSource ID="XmlDataSource1" runat="server" DataFile="~/App_Data/guestbook.xml"></asp:XmlDataSource>
    </p>
    <p>
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Button" />
    </p>
    <p>
    </p>
    <p>
    </p>
</asp:Content>

