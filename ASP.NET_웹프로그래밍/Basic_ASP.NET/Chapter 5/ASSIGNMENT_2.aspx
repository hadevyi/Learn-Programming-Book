<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="ASSIGNMENT_2.aspx.cs" Inherits="Chapter_5_ASSIGNMENT_2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .style7
        {}
        .style8
        {
            color: #660066;
        }
        .style9
        {
            color: #000000;
        }
        .style10
        {
            font-size: large;
        }
        .style11
        {
            font-size: large;
            color: #660066;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
    </p>
    <p class="style7">
        <strong>Pannel 실습</strong></p>
    <p class="style7">
        &nbsp;</p>
    <asp:Panel ID="Panel1" runat="server">
        <span class="style8"><strong><span class="style10">첫번째 페이지</span> </strong>
        </span><span class="style9">(Check Box 컨트롤)</span><br />
        <br />
        <asp:CheckBox ID="CheckBox1" runat="server" Text="웹프로그래밍" />
        <asp:CheckBox ID="CheckBox2" runat="server" Text="신호해석" />
        <asp:CheckBox ID="CheckBox3" runat="server" Text="디지털공학" />
        <asp:CheckBox ID="CheckBox4" runat="server" Text="공업수학" />
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="확인" />
        <br />
        <br />
        <asp:Label ID="Label1" runat="server"></asp:Label>
        <br />
        <br />
        <asp:Button ID="Button2" runat="server" onclick="Button2_Click" Text="다음페이지" />
        <br />
    </asp:Panel>
    <asp:Panel ID="Panel2" runat="server">
        <span class="style8"><strong><span class="style10">두번째 페이지</span> </strong>
        </span><span class="style9">(RadioButton 컨트롤)</span><br />
        <br />
        <asp:RadioButton ID="RadioButton1" runat="server" GroupName="pa2" 
            Text="웹프로그래밍" />
        <asp:RadioButton ID="RadioButton2" runat="server" GroupName="pa2" Text="신호해석" />
        <asp:RadioButton ID="RadioButton3" runat="server" GroupName="pa2" 
            Text="디지털공학" />
        <asp:RadioButton ID="RadioButton4" runat="server" GroupName="pa2" Text="공업수학" />
        <br />
        <br />
        <asp:Button ID="Button3" runat="server" onclick="Button3_Click" Text="확인" />
        <br />
        <br />
        <asp:Label ID="Label2" runat="server"></asp:Label>
        <br />
        <br />
        <asp:Button ID="Button4" runat="server" Text="이전 페이지" onclick="Button4_Click" />
        <asp:Button ID="Button5" runat="server" Text="다음 페이지" onclick="Button5_Click" />
    </asp:Panel>
    <asp:Panel ID="Panel3" runat="server">
        <strong><span class="style11">세번째 페이지</span></strong> (DropDownList 컨트롤)<br />
        <br />
        <asp:DropDownList ID="DropDownList1" runat="server">
            <asp:ListItem>웹프로그래밍</asp:ListItem>
            <asp:ListItem>신호해석</asp:ListItem>
            <asp:ListItem>디지털공학</asp:ListItem>
            <asp:ListItem>공업수학</asp:ListItem>
        </asp:DropDownList>
        <br />
        <br />
        <asp:Button ID="Button6" runat="server" Text="확인" onclick="Button6_Click" />
        <br />
        <br />
        <asp:Label ID="Label3" runat="server"></asp:Label>
        <br />
        <br />
        <asp:Button ID="Button7" runat="server" Text="이전 페이지" onclick="Button7_Click" />
    </asp:Panel>
    <p>
    </p>
    <p>
    </p>
</asp:Content>

