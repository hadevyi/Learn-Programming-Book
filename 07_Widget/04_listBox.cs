using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CarOptionSelecte
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            comboBox1.Items.Add("일시불");
            comboBox1.Items.Add("무통장입금");
            comboBox1.Items.Add("신용카드");
            comboBox1.SelectedIndex = 0;
            listBox1.Items.Add(" ");

            label3.Image = Properties.Resources.car_0;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int iData01 = 0;
            listBox1.Items.Clear();
            listBox1.Items.Add("선택차종:");

            if (radioButton1.Checked == true)
            {
                listBox1.Items.Add("      승용차");
                label3.Image = Properties.Resources.car_1;

                iData01 = iData01 + 100;
            }
            else if (radioButton2.Checked == true)
            {
                listBox1.Items.Add("      트럭");
                label3.Image = Properties.Resources.car_2;

                iData01 = iData01 + 80;
            }
            else if (radioButton3.Checked == true)
            {
                listBox1.Items.Add("      봉고차");
                label3.Image = Properties.Resources.car_3;

                iData01 = iData01 + 50;
            }

            listBox1.Items.Add("-----------");
            listBox1.Items.Add("선택옵션:");

            if (checkBox1.Checked == true)
            {
                listBox1.Items.Add("      썬루프");

                iData01 = iData01 + 1;
            }
            if (checkBox2.Checked == true)
            {
                listBox1.Items.Add("      자동온도조절장치");

                iData01 = iData01 + 2;
            }
            if (checkBox3.Checked == true)
            {
                listBox1.Items.Add("      GPS");

                iData01 = iData01 + 3;
            }
            if (checkBox4.Checked == true)
            {
                listBox1.Items.Add("      도난방지시스템");

                iData01 = iData01 + 2;
            }
            if (checkBox5.Checked == true)
            {
                listBox1.Items.Add("      에어백");

                iData01 = iData01 + 10;
            }

            listBox1.Items.Add("-----------");
            listBox1.Items.Add("결제방법:");

            if (comboBox1.SelectedIndex == 0)
            {
                listBox1.Items.Add("      일시불");
            }
            else if (comboBox1.SelectedIndex == 1)
            {
                listBox1.Items.Add("      무통장입금");
            }
            else if (comboBox1.SelectedIndex == 2)
            {
                listBox1.Items.Add("      신용카드");
            }

            listBox1.Items.Add("-----------");
            listBox1.Items.Add("견적금액:");
            listBox1.Items.Add("      " + iData01 + "만원");
            label6.Text = "견적가 : " + iData01 + "만원";
        }
    }
}
