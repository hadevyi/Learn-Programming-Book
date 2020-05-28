<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="ASSIFNMENT_1.aspx.cs" Inherits="Chapter_5_ASSIFNMENT_1" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <strong>
        <br />
        CheckBox 컨트롤 실습</strong></p>
    <p>
        좋아하는 과목을 선택한 후 버튼을 누르세요.</p>
    <p>
        <asp:CheckBox ID="CheckBox1" runat="server" Text="웹프로그래밍" />
        <asp:CheckBox ID="CheckBox2" runat="server" Text="신호해석" />
        <asp:CheckBox ID="CheckBox3" runat="server" Text="디지털공학" />
        <asp:CheckBox ID="CheckBox4" runat="server" Text="공업수학" />
    </p>
    <p>
        귀하가 좋아하는 과목은
        <asp:Label ID="Label1" runat="server" style="color: #660066"></asp:Label>
    </p>
    <p>
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="버튼" />
    </p>
    <p>
        &nbsp;</p>
</asp:Content>

