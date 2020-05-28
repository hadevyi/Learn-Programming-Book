<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="ASSIGNMENT_1.aspx.cs" Inherits="Chapter_6_ASSIGNMENT_1" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
    <br />
</p>
<p>
    &nbsp;</p>
<p>
    <asp:Label ID="Label3" runat="server" style="z-index: 1; left: 535px; top: 303px; position: absolute" Text="가격"></asp:Label>
    <asp:ListBox ID="ListBox1" runat="server" AutoPostBack="True" Height="176px" style="z-index: 1; left: 338px; top: 230px; position: absolute" Width="174px" OnSelectedIndexChanged="ListBox1_SelectedIndexChanged"></asp:ListBox>
    <asp:TextBox ID="TextBox1" runat="server"  style="z-index: 1; left: 584px; top: 299px; position: absolute; width: 95px"></asp:TextBox>
    <asp:ListBox ID="ListBox2" runat="server" style="z-index: 1; left: 726px; top: 232px; position: absolute; height: 173px; width: 158px"></asp:ListBox>
</p>
<p>
</p>
<p>
    <asp:Label ID="Label4" runat="server" style="z-index: 1; left: 533px; top: 351px; position: absolute; height: 40px;" Text="수량"></asp:Label>
</p>
<p>
    <asp:TextBox ID="TextBox2" runat="server" style="z-index: 1; left: 585px; top: 350px; position: absolute; width: 93px">1</asp:TextBox>
</p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
<p>
    <asp:TextBox ID="TextBox3" runat="server" style="z-index: 1; left: 406px; top: 436px; position: absolute">0</asp:TextBox>
&nbsp;<asp:TextBox ID="TextBox4" runat="server" style="z-index: 1; left: 637px; top: 434px; position: absolute"></asp:TextBox>
    <asp:Label ID="Label5" runat="server" style="z-index: 1; left: 344px; top: 437px; position: absolute" Text="총수량"></asp:Label>
    <asp:Label ID="Label6" runat="server" style="z-index: 1; left: 576px; top: 436px; position: absolute" Text="총가격"></asp:Label>
    <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" style="z-index: 1; left: 819px; top: 435px; position: absolute" Text="초기화" />
    </p>
</asp:Content>

