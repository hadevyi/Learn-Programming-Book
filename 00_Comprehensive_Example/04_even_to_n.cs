using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Mediterm14_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            try
            {
                int i;
                int count = 0;
                int num1 = int.Parse(textBox1.Text);
                int num2 = int.Parse(textBox2.Text);
                string result = "";

                if (num1 >= 1 && num1 <= 100)
                {
                    if (num1 == 1)
                    {
                        label2.Text = "표시할 결과값이 없습니다.";
                    }
                    else
                    {
                        for (i = 1; i <= num1; i++)
                        {
                            if (i % 2 == 0)
                            {
                                result += " " + i + " ";
                                count++;
                            }
                            if (count % num2 == 0)
                            {
                                result += '\n';
                            }
                        }
                        label2.Text = result;
                    }
                }
                else
                {
                    label2.Text = "1~100의 영역의 수만 입력하셔야합니다!";
                }
            }
            catch (Exception ee)
            {
                label2.Text = ee.Message;
            }
        }

        private void button2_Click_1(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
