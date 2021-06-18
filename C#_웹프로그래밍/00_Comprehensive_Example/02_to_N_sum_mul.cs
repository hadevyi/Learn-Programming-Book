using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Mediterm13_2
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
                int start_num = int.Parse(textBox1.Text);
                int end_num = int.Parse(textBox2.Text);
                int result1 = 0;
                int result2 = 1;
                int i;
                if (start_num > 1 && start_num < 20)
                {
                    if (end_num > 1 && end_num < 20)
                    {
                        if (start_num <= end_num)
                        {
                            for (i = start_num; i <= end_num; i++)
                            {
                                result1 += i;
                                result2 *= i;
                            }
                            label4.Text = start_num + "부터 " + end_num + " 까지의 합은 " + result1 + "\n 곱은 " + result2 + " 입니다.";
                        }
                        else
                            label4.Text = "시작 값은 마지막 값보다 작거나 같아야 합니다.\n다시 입력하세요!";
                    }
                    else
                    {
                        label4.Text = "1과 20 사이의 수를 입력하세요.\n다시 입력하세요!";
                        textBox2.Text = "";
                        textBox2.Focus();
                    }
                }
                else
                {
                    label4.Text = "1과 20 사이의 수를 입력하세요.\n다시 입력하세요!";
                    textBox1.Text = "";
                    textBox1.Focus();
                }
            }
            catch (Exception ee)
            {
                label4.Text = ee.Message + "\n다시 입력하세요!";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
