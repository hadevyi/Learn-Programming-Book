using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Mediterm13_3
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
                int i;
                int count = 0;
                int num1 = int.Parse(textBox1.Text);
                for (i = 2; i <= (num1 / 2); i++)
                {
                    if (num1 % i == 0)
                    {
                        count++;
                    }
                }
                if (count == 0 || num1 == 1)
                {
                    label3.Text = num1 + " 은 소수 입니다.";
                }
                else
                {
                    label3.Text = num1 + " 은 소수가 아닙니다.";
                }
            }
            catch (Exception ee)
            {
                label3.Text = ee.Message;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
