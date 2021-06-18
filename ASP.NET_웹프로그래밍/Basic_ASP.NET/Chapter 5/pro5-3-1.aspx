<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="pro5-3-1.aspx.cs" Inherits="Chapter_5_pro5_3_1" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
    </p>
    <p>
        <asp:Label ID="Label1" runat="server" Text="결과가 출력되는 곳입니다."></asp:Label>
    </p>
    <p>
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="버튼" />
    </p>
    <p>
        <asp:LinkButton ID="LinkButton1" runat="server" onclick="LinkButton1_Click">LinkButton</asp:LinkButton>
    </p>
    <p>
        <asp:ImageButton ID="ImageButton1" runat="server" ImageUrl="~/image/mslogo.jpg" 
            onclick="ImageButton1_Click" />
    </p>
    <p>
    </p>
</asp:Content>

