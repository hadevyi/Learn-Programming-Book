<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="pro5-4-3.aspx.cs" Inherits="Chapter_5_pro5_4_3" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
    </p>
    <p>
        <asp:ImageMap ID="ImageMap1" runat="server" ImageUrl="~/image/imagemap.jpg">
            <asp:CircleHotSpot NavigateUrl="~/image/hole-1.gif" Radius="34" Target="_blank" 
                X="34" Y="13" />
            <asp:CircleHotSpot NavigateUrl="~/image/hole-2.gif" Radius="34" Target="_blank" 
                X="102" Y="34" />
            <asp:CircleHotSpot NavigateUrl="~/image/hole-3.gif" Radius="34" Target="_blank" 
                X="170" Y="13" />
            <asp:CircleHotSpot NavigateUrl="~/image/hole-4.gif" Radius="34" Target="_blank" 
                X="238" Y="13" />
            <asp:CircleHotSpot NavigateUrl="~/image/hole-5.gif" Radius="34" Target="_blank" 
                X="306" Y="13" />
            <asp:CircleHotSpot NavigateUrl="~/image/hole-6.gif" Radius="34" Target="_blank" 
                X="374" Y="13" />
            <asp:CircleHotSpot NavigateUrl="~/image/hole-7.gif" Radius="34" Target="_blank" 
                X="442" Y="13" />
            <asp:CircleHotSpot NavigateUrl="~/image/hole-8.gif" Radius="34" Target="_blank" 
                X="510" Y="13" />
            <asp:CircleHotSpot NavigateUrl="~/image/hole-9.gif" Radius="34" Target="_blank" 
                X="578" Y="13" />
        </asp:ImageMap>
    </p>
    <p>
    </p>
</asp:Content>

