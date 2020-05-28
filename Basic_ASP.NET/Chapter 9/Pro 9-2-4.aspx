<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="Pro 9-2-4.aspx.cs" Inherits="Chapter_9_Pro_9_2_4" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
        DataList 실습</p>
    <p>
        <asp:DataList ID="DataList1" runat="server" CellPadding="4" DataKeyField="CategoryID" DataSourceID="SqlDataSource1" ForeColor="#333333" OnItemCreated="DataList1_ItemCreated" OnItemDataBound="DataList1_ItemDataBound" OnSelectedIndexChanged="DataList1_SelectedIndexChanged">
            <AlternatingItemStyle BackColor="White" />
            <FooterStyle BackColor="#1C5E55" Font-Bold="True" ForeColor="White" />
            <HeaderStyle BackColor="#1C5E55" Font-Bold="True" ForeColor="White" />
            <ItemStyle BackColor="#E3EAEB" />
            <ItemTemplate>
                이름 :
                <asp:Label ID="CategoryNameLabel" runat="server" style="font-weight: 700" Text='<%# Eval("CategoryName") %>' />
                &nbsp; (ID :<asp:Label ID="CategoryIDLabel" runat="server" Text='<%# Eval("CategoryID") %>' />
                ) <br />
                <asp:BulletedList ID="BulletedList1" runat="server" DataSourceID="BullSqlDataSource" DataTextField="ProductName" DataValueField="ProductName">
                </asp:BulletedList>
                <asp:SqlDataSource ID="BullSqlDataSource" runat="server" ConnectionString="<%$ ConnectionStrings:NorthwindConnectionString %>" SelectCommand="SELECT [ProductName] FROM [Products] WHERE ([CategoryID] = @CategoryID)">
                    <SelectParameters>
                        <asp:Parameter Name="CategoryID" Type="Int32" />
                    </SelectParameters>
                </asp:SqlDataSource>
<br />
            </ItemTemplate>
            <SelectedItemStyle BackColor="#C5BBAF" Font-Bold="True" ForeColor="#333333" />
            <SeparatorTemplate>
                <hr />
            </SeparatorTemplate>
        </asp:DataList>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:NorthwindConnectionString %>" SelectCommand="SELECT [CategoryID], [CategoryName] FROM [Categories]"></asp:SqlDataSource>
    </p>
    <p>
    </p>
</asp:Content>

