<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="UserDB_List.aspx.cs" Inherits="Chapter_10_UserDB_List" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="레코드 Insert하러 가기" />
    </p>
    <p>
        <asp:DataList ID="DataList1" runat="server" BackColor="White" BorderColor="#CC9966" BorderStyle="None" BorderWidth="1px" CellPadding="4" DataSourceID="XmlDataSource1" GridLines="Both">
            <FooterStyle BackColor="#FFFFCC" ForeColor="#330099" />
            <HeaderStyle BackColor="#990000" Font-Bold="True" ForeColor="#FFFFCC" />
            <ItemStyle BackColor="White" ForeColor="#330099" />
            <ItemTemplate>
                name:
                <asp:Label ID="nameLabel" runat="server" Text='<%# Eval("name") %>' />
                <br />
                id:
                <asp:Label ID="idLabel" runat="server" Text='<%# Eval("id") %>' />
                <br />
                email:
                <asp:Label ID="emailLabel" runat="server" Text='<%# Eval("email") %>' />
                <br />
                sex:
                <asp:Label ID="sexLabel" runat="server" Text='<%# Eval("sex") %>' />
                <br />
                mileage:
                <asp:Label ID="mileageLabel" runat="server" Text='<%# Eval("mileage") %>' />
                <br />
                level:
                <asp:Label ID="levelLabel" runat="server" Text='<%# Eval("level") %>' />
                <br />
                time:
                <asp:Label ID="timeLabel" runat="server" Text='<%# Eval("time") %>' />
                <br />
<br />
            </ItemTemplate>
            <SelectedItemStyle BackColor="#FFCC66" Font-Bold="True" ForeColor="#663399" />
        </asp:DataList>
        <asp:XmlDataSource ID="XmlDataSource1" runat="server" DataFile="~/App_Data/userdb.xml"></asp:XmlDataSource>
    </p>
    <p>
    </p>
</asp:Content>

