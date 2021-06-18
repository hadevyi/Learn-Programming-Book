<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="AASIGNMENT_3.aspx.cs" Inherits="Chapter_7_AASIGNMENT_3" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
    .style7
    {
        font-size: large;
    }
</style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
    <strong>
    <br class="style7" />
    <span class="style7">Range Validator 실습</span></strong></p>
<p>
    이름을 입력하세요!</p>
<p>
    <strong><span class="style7">
    <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
    </span></strong>
    <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" 
        ControlToValidate="TextBox1" ErrorMessage="이름을 입력하세요."></asp:RequiredFieldValidator>
    <asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" 
        ControlToValidate="TextBox1" ErrorMessage="한글 2~4글자" 
        ValidationExpression="[가-힣]{2,4}"></asp:RegularExpressionValidator>
</p>
<p>
    생일을 입력하세요!</p>
<p>
    <asp:TextBox ID="TextBox2" runat="server" Width="56px"></asp:TextBox>
    월
    <asp:TextBox ID="TextBox3" runat="server" Width="56px"></asp:TextBox>
    일
    <asp:Button ID="Button1" runat="server" Text="확  인" onclick="Button1_Click" />
</p>
<p>
    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
        ControlToValidate="TextBox2" ErrorMessage="월을 입력하세요."></asp:RequiredFieldValidator>
    <asp:RangeValidator ID="RangeValidator4" runat="server" 
        ControlToValidate="TextBox2" ErrorMessage="1~12 사이의 숫자를 입력하세요." 
        MaximumValue="12" MinimumValue="1" Type="Integer" 
        EnableClientScript="False"></asp:RangeValidator>
</p>
<p>
    <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
        ControlToValidate="TextBox3" ErrorMessage="일을 입력하세요."></asp:RequiredFieldValidator>
    <asp:RangeValidator ID="RangeValidator5" runat="server" 
        ControlToValidate="TextBox3" ErrorMessage="1~31 사이의 숫자를 입력하세요." 
        MaximumValue="31" MinimumValue="1" Type="Integer" 
        EnableClientScript="False"></asp:RangeValidator>
</p>
<p>
    <asp:Label ID="Label1" runat="server"></asp:Label>
    </p>
    <p>
        &nbsp;</p>
<p>
</p>
</asp:Content>

