using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace StringSplit
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string sData01 = "홍길동,이순신;임꺽정 세종대왕";
            string sData02 = ";, ";

            String[] sData;
            String[] sData0;

            sData = sData01.Split(sData02.ToCharArray());
            sData0 = sData01.Split(sData02.ToCharArray(), 3);

            label4.Text = sData[0];
            label5.Text = sData[1];
            label6.Text = sData[2];
            label7.Text = sData[3];

            label11.Text = sData0[0];
            label8.Text = sData0[1];
            label9.Text = sData0[2];
        }
    }
}
