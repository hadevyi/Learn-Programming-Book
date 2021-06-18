using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RandomCheckBoxSumList
{
    public partial class Form1 : Form
    {
        CheckBox[] mgr;

        public Form1()
        {
            InitializeComponent();

            mgr = new CheckBox[20];
            mgr[0] = checkBox1;
            mgr[1] = checkBox2;
            mgr[2] = checkBox3;
            mgr[3] = checkBox4;
            mgr[4] = checkBox5;
            mgr[5] = checkBox6;
            mgr[6] = checkBox7;
            mgr[7] = checkBox8;
            mgr[8] = checkBox9;
            mgr[9] = checkBox10;
            mgr[10] = checkBox11;
            mgr[11] = checkBox12;
            mgr[12] = checkBox13;
            mgr[13] = checkBox14;
            mgr[14] = checkBox15;
            mgr[15] = checkBox16;
            mgr[16] = checkBox17;
            mgr[17] = checkBox18;
            mgr[18] = checkBox19;
            mgr[19] = checkBox20;

            listBox2.Items.Add("     ");
            listBox2.Items.Add("1) 20개짜리 체크박스 배열 만들기");
            listBox2.Items.Add("     ");
            listBox2.Items.Add("   CheckBox[] checkBoxMgr;");
            listBox2.Items.Add("   checkBoxMgr = new CheckBox[20];");
            listBox2.Items.Add("    TextBox Page258 참고");
            listBox2.Items.Add("     ");
            listBox2.Items.Add("2) 반복문을 이용 각각의 체크박스에 랜덤숫자 넣기");
            listBox2.Items.Add("      ");
            listBox2.Items.Add("   for(int i=0;i < 20; i++");
            listBox2.Items.Add("    checkBoxMgr[i].Text=ranNum.Next(1,99).ToString();");
            listBox2.Items.Add("      ");
            listBox2.Items.Add("3) 반복문을 이용 선택된 체크박스의 숫자 더하기");
            listBox2.Items.Add("      ");
            listBox2.Items.Add("   for(int i = 0; i < 20; i++)");
            listBox2.Items.Add("    if(checkBoxMgr[i].Checked)");
            listBox2.Items.Add("     TempSum += int.Parse(checkBoxMgr[i].Text);");
            listBox2.Items.Add("      ");
            listBox2.Items.Add("4) 초기화시 반복문이용 체크박스의 선택 해제");
            listBox2.Items.Add("      ");
            listBox2.Items.Add("   for(int i = 0; i < 20; i++)");
            listBox2.Items.Add("    if(checkBoxMgr[i].Checked)");
            listBox2.Items.Add("       checkBoxMgr[i].Checked = false;");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            System.Random rannum = new System.Random();

            for (int i = 0; i < 20; i++)
            {
                mgr[i].Text = rannum.Next(1, 100).ToString();
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                listBox1.Items.Clear();
                listBox2.Items.Clear();

                listBox1.Items.Add("각 체크박스의 숫자들");
                listBox1.Items.Add("--------------------");

                for (int i = 0; i < 20; i++)
                {
                    listBox1.Items.Add("checkBox" + (i + 1) + "=" + mgr[i].Text);
                }

                double sum = 0;
                int count = 0;

                listBox2.Items.Add("선택된 체크박스의 숫자들");
                listBox2.Items.Add("-------------------------");

                for (int i = 0; i < 20; i++)
                {
                    if (mgr[i].Checked == true)
                    {
                        sum += int.Parse(mgr[i].Text);
                        count++;

                        listBox2.Items.Add("checkBox" + (i + 1) + "=" + mgr[i].Text);
                    }
                }

                listBox2.Items.Add("-------------------------");
                listBox2.Items.Add("                         ");
                listBox2.Items.Add("선택된 체크박스의 숫자합계");
                listBox2.Items.Add("-------------------------");
                listBox2.Items.Add("숫자합계-> " + sum);
                listBox2.Items.Add("-------------------------");
                listBox2.Items.Add("                         ");
                listBox2.Items.Add("선택된 체크박스의 숫자평균");
                listBox2.Items.Add("--------------------------");
                listBox2.Items.Add("                         ");
                listBox2.Items.Add("숫자평균 " + sum / count);
            }
            catch
            {
                listBox1.Items.Clear();
                listBox2.Items.Clear();

                listBox1.Items.Add("각 체크박스의 숫자들");
                listBox1.Items.Add("--------------------");

                for (int i = 0; i < 20; i++)
                {
                    listBox1.Items.Add("checkBox" + (i + 1) + "=" + mgr[i].Text);
                }

                listBox2.Items.Add("선택된 체크박스의 숫자들");
                listBox2.Items.Add("-------------------------");

                for (int i = 0; i < 20; i++)
                {
                    if (mgr[i].Checked == true)
                    {

                        listBox2.Items.Add("checkBox" + (i + 1) + "=" + mgr[i].Text);
                    }
                }
                listBox2.Items.Add("-------------------------");
                listBox2.Items.Add("                         ");
                listBox2.Items.Add("선택된 체크박스의 숫자합계");

                MessageBox.Show("숫자 바꾸기를 먼저하세요!\n입력 문자열의 형식이 잘못되었습니다.");
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            listBox1.Items.Clear();
            listBox2.Items.Clear();

            for (int i = 0; i < mgr.Length; i++)
            {
                if (mgr[i].Checked == true)
                {
                    mgr[i].Checked = false;
                }
            }

            checkBox1.Text = "checkBox1";
            checkBox2.Text = "checkBox2";
            checkBox3.Text = "checkBox3";
            checkBox4.Text = "checkBox4";
            checkBox5.Text = "checkBox5";
            checkBox6.Text = "checkBox6";
            checkBox7.Text = "checkBox7";
            checkBox8.Text = "checkBox8";
            checkBox9.Text = "checkBox9";
            checkBox10.Text = "checkBox10";
            checkBox11.Text = "checkBox11";
            checkBox12.Text = "checkBox12";
            checkBox13.Text = "checkBox13";
            checkBox14.Text = "checkBox14";
            checkBox15.Text = "checkBox15";
            checkBox16.Text = "checkBox16";
            checkBox17.Text = "checkBox17";
            checkBox18.Text = "checkBox18";
            checkBox19.Text = "checkBox19";
            checkBox20.Text = "checkBox20";

            listBox1.Items.Add("");

            listBox2.Items.Add("     ");
            listBox2.Items.Add("1) 20개짜리 체크박스 배열 만들기");
            listBox2.Items.Add("     ");
            listBox2.Items.Add("   CheckBox[] checkBoxMgr;");
            listBox2.Items.Add("   checkBoxMgr = new CheckBox[20];");
            listBox2.Items.Add("    TextBox Page258 참고");
            listBox2.Items.Add("     ");
            listBox2.Items.Add("2) 반복문을 이용 각각의 체크박스에 랜덤숫자 넣기");
            listBox2.Items.Add("      ");
            listBox2.Items.Add("   for(int i=0;i < 20; i++");
            listBox2.Items.Add("    checkBoxMgr[i].Text=ranNum.Next(1,99).ToString();");
            listBox2.Items.Add("      ");
            listBox2.Items.Add("3) 반복문을 이용 선택된 체크박스의 숫자 더하기");
            listBox2.Items.Add("      ");
            listBox2.Items.Add("   for(int i = 0; i < 20; i++)");
            listBox2.Items.Add("    if(checkBoxMgr[i].Checked)");
            listBox2.Items.Add("     TempSum += int.Parse(checkBoxMgr[i].Text);");
            listBox2.Items.Add("      ");
            listBox2.Items.Add("4) 초기화시 반복문이용 체크박스의 선택 해제");
            listBox2.Items.Add("      ");
            listBox2.Items.Add("   for(int i = 0; i < 20; i++)");
            listBox2.Items.Add("    if(checkBoxMgr[i].Checked)");
            listBox2.Items.Add("       checkBoxMgr[i].Checked = false;");
        }

        private void button4_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
