using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ComboBoxBrith
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            comboBox1.SelectedIndex = 7;
            comboBox2.SelectedIndex = 2;
            comboBox3.SelectedIndex = 0;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label5.Text = "";
            String sData01 = textBox1.Text;

            if (textBox1.Text == "")
            {
                label5.Text = "성명을 입력하세요!";
            }
            else if (radioButton1.Checked == false && radioButton2.Checked == false)
            {
                label5.Text = "성별을 선택하여주세요!";
            }
            else
            {
                if (radioButton1.Checked == true)
                {
                    label5.Text = sData01 + "님의 정보\n성별 : 남\n생년월일 " + comboBox1.SelectedItem + " 년 " + comboBox2.SelectedItem + " 월 " + comboBox3.SelectedItem + " 일";
                }
                else if (radioButton2.Checked == true)
                {
                    label5.Text = sData01 + "님의 정보\n성별 : 여\n생년월일 " + comboBox1.SelectedItem + " 년 " + comboBox2.SelectedItem + " 월 " + comboBox3.SelectedItem + " 일";
                }

            }
        }

        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            int iData01 = comboBox3.SelectedIndex;
            comboBox3.Items.Clear();

            if (comboBox2.SelectedIndex == 1)
            {
                for (int i = 1; i < 29; i++)
                {
                    comboBox3.Items.Add(i.ToString());
                }
            } // 28일까지 나오는 2월
            else if (comboBox2.SelectedIndex == 3 || comboBox2.SelectedIndex == 5 || comboBox2.SelectedIndex == 8 || comboBox2.SelectedIndex == 10)
            {
                for (int i = 1; i < 31; i++)
                {
                    comboBox3.Items.Add(i.ToString());
                }
            } // 30일까지 나오는 월
            else
            {
                for (int i = 1; i < 32; i++)
                {
                    comboBox3.Items.Add(i.ToString());
                }
            } // 31일까지 나오는 월

            comboBox3.SelectedIndex = iData01;
        }
    }
}
