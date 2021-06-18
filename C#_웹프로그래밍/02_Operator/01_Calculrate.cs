using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CALCULRATE
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                int iData01 = int.Parse(textBox1.Text);
                int iData02 = int.Parse(textBox2.Text);
                int iData03 = iData01 + iData02;
                label1.Text = "+";
                label2.Text = "결과는 " + iData03 + " 입니다.";
            }
            catch
            {
                label1.Text = "???";
                label2.Text = "결과에 이상이 있습니다.";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                int iData01 = int.Parse(textBox1.Text);
                int iData02 = int.Parse(textBox2.Text);
                int iData03 = iData01 - iData02;
                label1.Text = "-";
                label2.Text = "결과는 " + iData03 + " 입니다.";
            }
            catch
            {
                label1.Text = "???";
                label2.Text = "결과에 이상이 있습니다.";
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                int iData01 = int.Parse(textBox1.Text);
                int iData02 = int.Parse(textBox2.Text);
                int iData03 = iData01 * iData02;
                label1.Text = "*";
                label2.Text = "결과는 " + iData03 + " 입니다.";
            }
            catch
            {
                label1.Text = "???";
                label2.Text = "결과에 이상이 있습니다.";
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            try
            {
                double iData01 = double.Parse(textBox1.Text);
                double iData02 = double.Parse(textBox2.Text);
                double iData03 = iData01 / iData02;
                label1.Text = "/";
                label2.Text = "결과는 " + iData03 + " 입니다.";
            }
            catch
            {
                label1.Text = "???";
                label2.Text = "결과에 이상이 있습니다.";
            }
        }
    }
}
