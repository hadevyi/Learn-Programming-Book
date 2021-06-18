<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="ASSIGNMENT_2.aspx.cs" Inherits="Chapter_6_ASSIGNMENT_2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .auto-style1 {}
        .auto-style2 {
            text-align: center;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
    </p>
    <div class="auto-style1" style="height: 332px; width: 235px; background-color: #FFFF99; z-index: 1; left: 370px; top: 151px; position: absolute; text-align: center;">
        <strong>
        <br />
        버튼리스트 가격들</strong><br />
        <br />
        <asp:TextBox ID="TextBox1" runat="server" Width="200px"></asp:TextBox>
        <br />
        <asp:RadioButtonList ID="RadioButtonList1" runat="server" Height="217px" style="text-align: left" Width="171px">
            <asp:ListItem Value="5000">수박(5000원)</asp:ListItem>
            <asp:ListItem Value="4000">파인애플(4000원)</asp:ListItem>
            <asp:ListItem Value="4500">딸기(4500원)</asp:ListItem>
            <asp:ListItem Value="3000">사과(3000원)</asp:ListItem>
            <asp:ListItem Value="2500">오렌지(2500원)</asp:ListItem>
            <asp:ListItem Value="2000">포도(2000원)</asp:ListItem>
            <asp:ListItem Value="1000">귤(1000원)</asp:ListItem>
        </asp:RadioButtonList>
    </div>
    <div class="auto-style2" style="background-color: #99CCFF; height: 333px; width: 244px; z-index: 1; left: 642px; top: 152px; position: absolute;">
        <div class="auto-style2">
            <br />
            체크박스리스트 가격들<br />
            <br />
            <asp:TextBox ID="TextBox2" runat="server" Width="190px"></asp:TextBox>
            <br />
        </div>
        <asp:CheckBoxList ID="CheckBoxList1" runat="server" Height="228px" style="text-align: left" Width="172px">
            <asp:ListItem Value="3000">배(3000원)</asp:ListItem>
            <asp:ListItem Value="5000">바나나(5000원)</asp:ListItem>
            <asp:ListItem Value="2000">감(2000원)</asp:ListItem>
            <asp:ListItem Value="2000">메론(2000원)</asp:ListItem>
            <asp:ListItem Value="1500">키위(1500원)</asp:ListItem>
            <asp:ListItem Value="2500">망고(2500원)</asp:ListItem>
            <asp:ListItem Value="1000">토마토(1000원)</asp:ListItem>
        </asp:CheckBoxList>
    </div>
    <p>
    </p>
    <p>
    </p>
    <p>
    </p>
    <p>
    </p>
    <p>
    </p>
    <p>
    </p>
    <p>
    </p>
    <p>
    </p>
    <p>
    </p>
    <p>
    </p>
    <p style="text-align: center">
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" style="z-index: 1; left: 515px; top: 504px; position: absolute" Text="가격계산" />
&nbsp;<asp:Button ID="Button2" runat="server" OnClick="Button2_Click" style="z-index: 1; left: 602px; top: 504px; position: absolute" Text="초기화" />
    </p>
    <p style="text-align: center">
        <asp:Label ID="Label1" runat="server" style="z-index: 1; left: 480px; top: 548px; position: absolute" Text="총가격 : "></asp:Label>
        <asp:TextBox ID="TextBox3" runat="server" style="z-index: 1; left: 550px; top: 545px; position: absolute"></asp:TextBox>
    </p>
</asp:Content>

