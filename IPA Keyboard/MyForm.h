#include <string>
#include <windows.h>
#pragma once

namespace IPAKeyboard {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ input;
	private: System::Windows::Forms::Button^ ConsonantsP;


	private: System::Windows::Forms::Button^ Diacritics;
	private: System::Windows::Forms::Button^ Vowels;
	private: System::Windows::Forms::Button^ Other;
	private: System::Windows::Forms::PictureBox^ ConsonantsPPic;

	private: System::Windows::Forms::Button^ UnvoicedBilabialPlosive;
	private: System::Windows::Forms::Button^ BilabialNasal;


	private: System::Windows::Forms::Button^ VoicedBilabialPlosive;
	private: System::Windows::Forms::Button^ BilabialTrill;


	private: System::Windows::Forms::Button^ LabiodentalNasal;
	private: System::Windows::Forms::Button^ UnvoicedBilabialFricative;
	private: System::Windows::Forms::Button^ VoicedBilabialFricative;




	private: System::Windows::Forms::Button^ UnvoicedAlveolarPlosive;
	private: System::Windows::Forms::Button^ VoicedAlveolarPlosive;
	private: System::Windows::Forms::Button^ AlveolarNasal;
	private: System::Windows::Forms::Button^ AlveolarTrill;
	private: System::Windows::Forms::Button^ AlveolarTap;
	private: System::Windows::Forms::Button^ VoicedAlveolarFricative;









	private: System::Windows::Forms::Button^ UnvoicedAlveolarFricative;

	private: System::Windows::Forms::Button^ VoicedDentalFricative;

	private: System::Windows::Forms::Button^ UnvoicedDentalFricative;

	private: System::Windows::Forms::Button^ VoicedLabiodentalFricative;

	private: System::Windows::Forms::Button^ UnvoicedLabiodentalFricative;

	private: System::Windows::Forms::Button^ LabiodentalFlap;
	private: System::Windows::Forms::Button^ LabiodentalApproximant;


	private: System::Windows::Forms::Button^ UnvoicedAlveolarLateralFricative;
	private: System::Windows::Forms::Button^ VoicedAlveolarLateralFricative;


	private: System::Windows::Forms::Button^ UnvoicedPostalveolarFricative;
	private: System::Windows::Forms::Button^ VoicedPostalveolarFricative;
	private: System::Windows::Forms::Button^ AlveolarApproximant;
	private: System::Windows::Forms::Button^ AlveolarLateralApproximant;








	private: System::Windows::Forms::Button^ RetroflexFlap;
	private: System::Windows::Forms::Button^ VoicedRetroflexFricative;


	private: System::Windows::Forms::Button^ UnvoicedRetroflexFricative;

	private: System::Windows::Forms::Button^ UnvoicedRetroflexPlosive;
	private: System::Windows::Forms::Button^ VoicedRetroflexPlosive;
	private: System::Windows::Forms::Button^ RetroflexNasal;



	private: System::Windows::Forms::Button^ UnvoicedPalatalPlosive;
	private: System::Windows::Forms::Button^ VoicedPalatalPlosive;
	private: System::Windows::Forms::Button^ UnvoicedVelarPlosive;
	private: System::Windows::Forms::Button^ VoicedVelarPlosive;
	private: System::Windows::Forms::Button^ UnvoicedUvularPlosive;
	private: System::Windows::Forms::Button^ VoicedUvularPlosive;
	private: System::Windows::Forms::Button^ GlottalPlosive;
	private: System::Windows::Forms::Button^ VelarNasal;









	private: System::Windows::Forms::Button^ PalatalNasal;
	private: System::Windows::Forms::Button^ UvularNasal;
	private: System::Windows::Forms::Button^ UvularTrill;
private: System::Windows::Forms::Button^ VoicedUvularFricative;




private: System::Windows::Forms::Button^ UnvoicedUvularFricative;

private: System::Windows::Forms::Button^ VoicedVelarFricative;

private: System::Windows::Forms::Button^ UnvoicedVelarFricative;

private: System::Windows::Forms::Button^ VoicedPalatalFricative;

private: System::Windows::Forms::Button^ UnvoicedPalatalFricative;
private: System::Windows::Forms::Button^ UnvoicedPharyngealFricative;
private: System::Windows::Forms::Button^ VoicedPharyngealFricative;
private: System::Windows::Forms::Button^ UnvoicedGlottalFricative;
private: System::Windows::Forms::Button^ VoicedGlottalFricative;
private: System::Windows::Forms::Button^ VelarApproximant;
private: System::Windows::Forms::Button^ VelarLateralApproximant;








private: System::Windows::Forms::Button^ PalatalLateralApproximant;

private: System::Windows::Forms::Button^ PalatalApproximant;

private: System::Windows::Forms::Button^ RetroflexApproximant;
private: System::Windows::Forms::Button^ RetroflexLateralApproximant;
private: System::Windows::Forms::Button^ ConsonantsNP;
private: System::Windows::Forms::Button^ ConsonantsO;
private: System::Windows::Forms::PictureBox^ ConsonantsNPPic;

private: System::Windows::Forms::Button^ BilabialClick;
private: System::Windows::Forms::Button^ DentalClick;
private: System::Windows::Forms::Button^ AlveolarClick;
private: System::Windows::Forms::Button^ PalatoalveolarClick;
private: System::Windows::Forms::Button^ BilabialImplosive;
private: System::Windows::Forms::Button^ DentalAlveolarImplosive;
private: System::Windows::Forms::Button^ PalatalImplosive;
private: System::Windows::Forms::Button^ VelarImplosive;
private: System::Windows::Forms::Button^ UvularImplosive;
private: System::Windows::Forms::Button^ Ejective;















private: System::Windows::Forms::Button^ AlveolarLateralClick;
private: System::Windows::Forms::PictureBox^ ConsonantsOPic;
private: System::Windows::Forms::Button^ VoicelessLabialVelarFricative;


private: System::Windows::Forms::Button^ VoicedLabialVelarApproximant;
private: System::Windows::Forms::Button^ VoicedLabialPalatalApproximant;
private: System::Windows::Forms::Button^ VoicelessEpiglottalFricative;
private: System::Windows::Forms::Button^ VoicedEpiglottalFricative;
private: System::Windows::Forms::Button^ EpiglottalPlosive;
private: System::Windows::Forms::Button^ UnvoicedAlveoloPalatalFricative;

private: System::Windows::Forms::Button^ VoicedAlveoloPalatalFricative;
private: System::Windows::Forms::Button^ UnvoicedPostalveoloVelarFricative;










private: System::Windows::Forms::Button^ VoicedAlveolarLateralFlap;
private: System::Windows::Forms::Button^ LinkAbove;

private: System::Windows::Forms::Button^ LinkBelow;
private: System::Windows::Forms::PictureBox^ VowelsPic;

private: System::Windows::Forms::Button^ CloseFrontUnrounded;
private: System::Windows::Forms::Button^ CloseFrontRounded;
private: System::Windows::Forms::Button^ CloseMidFrontUnrounded;
private: System::Windows::Forms::Button^ NearCloseNearFrontUnrounded;
private: System::Windows::Forms::Button^ NearCloseNearFrontRounded;
private: System::Windows::Forms::Button^ CloseCentralUnrounded;
private: System::Windows::Forms::Button^ CloseCentralRounded;
private: System::Windows::Forms::Button^ CloseBackUnrounded;
private: System::Windows::Forms::Button^ CloseBackRounded;
private: System::Windows::Forms::Button^ CloseMidBackRounded;

private: System::Windows::Forms::Button^ CloseMidBackUnrounded;

private: System::Windows::Forms::Button^ NearCloseNearBackRounded;
private: System::Windows::Forms::Button^ CloseMidCentralRounded;

private: System::Windows::Forms::Button^ CloseMidCentralUnrounded;

private: System::Windows::Forms::Button^ CloseMidFrontRounded;
private: System::Windows::Forms::Button^ OpenMidFrontUnrounded;
private: System::Windows::Forms::Button^ OpenMidFrontRounded;
private: System::Windows::Forms::Button^ OpenMidCentralUnrounded;
private: System::Windows::Forms::Button^ OpenMidCentralRounded;
private: System::Windows::Forms::Button^ OpenMidBackUnrounded;
private: System::Windows::Forms::Button^ OpenMidBackRounded;
private: System::Windows::Forms::Button^ OpenBackRounded;







private: System::Windows::Forms::Button^ OpenBackUnrounded;

private: System::Windows::Forms::Button^ OpenFrontRounded;

private: System::Windows::Forms::Button^ OpenFrontUnrounded;

private: System::Windows::Forms::Button^ NearOpenFrontUnrounded;
private: System::Windows::Forms::Button^ NearOpenCentral;



private: System::Windows::Forms::Button^ MidCentral;
private: System::Windows::Forms::PictureBox^ DiacriticsPic;

private: System::Windows::Forms::Button^ Voiceless;
private: System::Windows::Forms::Button^ Voiced;
private: System::Windows::Forms::Button^ Aspirated;
private: System::Windows::Forms::Button^ MoreRounded;
private: System::Windows::Forms::Button^ LessRounded;

private: System::Windows::Forms::Button^ Advanced;
private: System::Windows::Forms::Button^ Retracted;
private: System::Windows::Forms::Button^ Centralized;
private: System::Windows::Forms::Button^ MidCentralised;
private: System::Windows::Forms::Button^ Syllabic;
private: System::Windows::Forms::Button^ NonSyllabic;
private: System::Windows::Forms::Button^ Rhoticity;
private: System::Windows::Forms::Button^ BreathyVoiced;
private: System::Windows::Forms::Button^ CreakyVoiced;
private: System::Windows::Forms::Button^ Linguolabial;
private: System::Windows::Forms::Button^ Labialized;
private: System::Windows::Forms::Button^ Palatalized;
private: System::Windows::Forms::Button^ Velarized;
private: System::Windows::Forms::Button^ Pharyngealized;
private: System::Windows::Forms::Button^ VelarizedOrPharyngealized;
private: System::Windows::Forms::Button^ Raised;
private: System::Windows::Forms::Button^ Lowered;
private: System::Windows::Forms::Button^ AdvancedToungeRoot;
private: System::Windows::Forms::Button^ RetractedToungeRoot;
private: System::Windows::Forms::Button^ Dental;
private: System::Windows::Forms::Button^ Apical;
private: System::Windows::Forms::Button^ Laminal;
private: System::Windows::Forms::Button^ Nasalized;
private: System::Windows::Forms::Button^ NasalRelease;
private: System::Windows::Forms::Button^ LateralRelease;
private: System::Windows::Forms::Button^ NoAudibleRelease;
private: System::Windows::Forms::PictureBox^ SuprasegmantalsPic;
private: System::Windows::Forms::PictureBox^ TonesAndWordAccentsPic;



private: System::Windows::Forms::Button^ PrimaryStress;
private: System::Windows::Forms::Button^ SecondaryStress;
private: System::Windows::Forms::Button^ Long;
private: System::Windows::Forms::Button^ HalfLong;
private: System::Windows::Forms::Button^ ExtraShort;

private: System::Windows::Forms::Button^ MinorFootGroup;
private: System::Windows::Forms::Button^ MajorIntonationGroup;
private: System::Windows::Forms::Button^ SyllableBreak;
private: System::Windows::Forms::Button^ Linking;
private: System::Windows::Forms::Button^ ExtraHighDiacritic;
private: System::Windows::Forms::Button^ ExtraHigh;
private: System::Windows::Forms::Button^ High;
private: System::Windows::Forms::Button^ HighDiacritic;













private: System::Windows::Forms::Button^ MidDiacritic;
private: System::Windows::Forms::Button^ Mid;
private: System::Windows::Forms::Button^ Low;




private: System::Windows::Forms::Button^ LowDiacritic;
private: System::Windows::Forms::Button^ ExtraLowDiacritic;
private: System::Windows::Forms::Button^ ExtraLow;



private: System::Windows::Forms::Button^ DownStep;
private: System::Windows::Forms::Button^ Upstep;
private: System::Windows::Forms::Button^ GlobalFall;



private: System::Windows::Forms::Button^ GlobalRise;

private: System::Windows::Forms::Button^ RisingFallingDiacritic;

private: System::Windows::Forms::Button^ LowRisingDiacritic;

private: System::Windows::Forms::Button^ HighRisingDiactritic;

private: System::Windows::Forms::Button^ FallingDiacritic;

private: System::Windows::Forms::Button^ RisingDiacritic;
private: System::Windows::Forms::Button^ Rising;
private: System::Windows::Forms::Button^ Falling;
private: System::Windows::Forms::Button^ HighRising;
private: System::Windows::Forms::Button^ LowRising;
private: System::Windows::Forms::Button^ RisingFalling;
private: System::Windows::Forms::Button^ Slashes;
private: System::Windows::Forms::Button^ SquareBrackets;
private: System::Windows::Forms::Button^ AngleBrackets;
private: System::Windows::Forms::Button^ CurlyBrackets;
private: System::Windows::Forms::Button^ Parentheses;
private: System::Windows::Forms::Button^ DoubleParentheses;
private: System::Windows::Forms::Button^ DoubleSquareBrackets;
private: System::Windows::Forms::Button^ DoubleSlashes;
private: System::Windows::Forms::Button^ DoubleAngleBrackets;
private: System::Windows::Forms::Button^ Backspace;
private: System::Windows::Forms::Button^ Enter;
private: System::Windows::Forms::Button^ VoicelessAbove;
private: System::Windows::Forms::Button^ MoreRoundedAbove;
private: System::Windows::Forms::Button^ LessRoundedAbove;
private: System::Windows::Forms::Button^ RetractedAbove;
private: System::Windows::Forms::Button^ SyllabicAbove;
private: System::Windows::Forms::Button^ NonSyllabicAbove;
private: System::Windows::Forms::Button^ Clear;
private: System::Windows::Forms::Button^ DentalAbove;
private: System::Windows::Forms::Button^ Tilde;
private: System::Windows::Forms::Button^ Space;
































	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->input = (gcnew System::Windows::Forms::Label());
			this->ConsonantsP = (gcnew System::Windows::Forms::Button());
			this->Diacritics = (gcnew System::Windows::Forms::Button());
			this->Vowels = (gcnew System::Windows::Forms::Button());
			this->Other = (gcnew System::Windows::Forms::Button());
			this->ConsonantsPPic = (gcnew System::Windows::Forms::PictureBox());
			this->UnvoicedBilabialPlosive = (gcnew System::Windows::Forms::Button());
			this->BilabialNasal = (gcnew System::Windows::Forms::Button());
			this->VoicedBilabialPlosive = (gcnew System::Windows::Forms::Button());
			this->BilabialTrill = (gcnew System::Windows::Forms::Button());
			this->LabiodentalNasal = (gcnew System::Windows::Forms::Button());
			this->UnvoicedBilabialFricative = (gcnew System::Windows::Forms::Button());
			this->VoicedBilabialFricative = (gcnew System::Windows::Forms::Button());
			this->UnvoicedAlveolarPlosive = (gcnew System::Windows::Forms::Button());
			this->VoicedAlveolarPlosive = (gcnew System::Windows::Forms::Button());
			this->AlveolarNasal = (gcnew System::Windows::Forms::Button());
			this->AlveolarTrill = (gcnew System::Windows::Forms::Button());
			this->AlveolarTap = (gcnew System::Windows::Forms::Button());
			this->VoicedAlveolarFricative = (gcnew System::Windows::Forms::Button());
			this->UnvoicedAlveolarFricative = (gcnew System::Windows::Forms::Button());
			this->VoicedDentalFricative = (gcnew System::Windows::Forms::Button());
			this->UnvoicedDentalFricative = (gcnew System::Windows::Forms::Button());
			this->VoicedLabiodentalFricative = (gcnew System::Windows::Forms::Button());
			this->UnvoicedLabiodentalFricative = (gcnew System::Windows::Forms::Button());
			this->LabiodentalFlap = (gcnew System::Windows::Forms::Button());
			this->LabiodentalApproximant = (gcnew System::Windows::Forms::Button());
			this->UnvoicedAlveolarLateralFricative = (gcnew System::Windows::Forms::Button());
			this->VoicedAlveolarLateralFricative = (gcnew System::Windows::Forms::Button());
			this->UnvoicedPostalveolarFricative = (gcnew System::Windows::Forms::Button());
			this->VoicedPostalveolarFricative = (gcnew System::Windows::Forms::Button());
			this->AlveolarApproximant = (gcnew System::Windows::Forms::Button());
			this->AlveolarLateralApproximant = (gcnew System::Windows::Forms::Button());
			this->RetroflexFlap = (gcnew System::Windows::Forms::Button());
			this->VoicedRetroflexFricative = (gcnew System::Windows::Forms::Button());
			this->UnvoicedRetroflexFricative = (gcnew System::Windows::Forms::Button());
			this->UnvoicedRetroflexPlosive = (gcnew System::Windows::Forms::Button());
			this->VoicedRetroflexPlosive = (gcnew System::Windows::Forms::Button());
			this->RetroflexNasal = (gcnew System::Windows::Forms::Button());
			this->UnvoicedPalatalPlosive = (gcnew System::Windows::Forms::Button());
			this->VoicedPalatalPlosive = (gcnew System::Windows::Forms::Button());
			this->UnvoicedVelarPlosive = (gcnew System::Windows::Forms::Button());
			this->VoicedVelarPlosive = (gcnew System::Windows::Forms::Button());
			this->UnvoicedUvularPlosive = (gcnew System::Windows::Forms::Button());
			this->VoicedUvularPlosive = (gcnew System::Windows::Forms::Button());
			this->GlottalPlosive = (gcnew System::Windows::Forms::Button());
			this->VelarNasal = (gcnew System::Windows::Forms::Button());
			this->PalatalNasal = (gcnew System::Windows::Forms::Button());
			this->UvularNasal = (gcnew System::Windows::Forms::Button());
			this->UvularTrill = (gcnew System::Windows::Forms::Button());
			this->VoicedUvularFricative = (gcnew System::Windows::Forms::Button());
			this->UnvoicedUvularFricative = (gcnew System::Windows::Forms::Button());
			this->VoicedVelarFricative = (gcnew System::Windows::Forms::Button());
			this->UnvoicedVelarFricative = (gcnew System::Windows::Forms::Button());
			this->VoicedPalatalFricative = (gcnew System::Windows::Forms::Button());
			this->UnvoicedPalatalFricative = (gcnew System::Windows::Forms::Button());
			this->UnvoicedPharyngealFricative = (gcnew System::Windows::Forms::Button());
			this->VoicedPharyngealFricative = (gcnew System::Windows::Forms::Button());
			this->UnvoicedGlottalFricative = (gcnew System::Windows::Forms::Button());
			this->VoicedGlottalFricative = (gcnew System::Windows::Forms::Button());
			this->VelarApproximant = (gcnew System::Windows::Forms::Button());
			this->VelarLateralApproximant = (gcnew System::Windows::Forms::Button());
			this->PalatalLateralApproximant = (gcnew System::Windows::Forms::Button());
			this->PalatalApproximant = (gcnew System::Windows::Forms::Button());
			this->RetroflexApproximant = (gcnew System::Windows::Forms::Button());
			this->RetroflexLateralApproximant = (gcnew System::Windows::Forms::Button());
			this->ConsonantsNP = (gcnew System::Windows::Forms::Button());
			this->ConsonantsO = (gcnew System::Windows::Forms::Button());
			this->ConsonantsNPPic = (gcnew System::Windows::Forms::PictureBox());
			this->BilabialClick = (gcnew System::Windows::Forms::Button());
			this->DentalClick = (gcnew System::Windows::Forms::Button());
			this->AlveolarClick = (gcnew System::Windows::Forms::Button());
			this->PalatoalveolarClick = (gcnew System::Windows::Forms::Button());
			this->BilabialImplosive = (gcnew System::Windows::Forms::Button());
			this->DentalAlveolarImplosive = (gcnew System::Windows::Forms::Button());
			this->PalatalImplosive = (gcnew System::Windows::Forms::Button());
			this->VelarImplosive = (gcnew System::Windows::Forms::Button());
			this->UvularImplosive = (gcnew System::Windows::Forms::Button());
			this->Ejective = (gcnew System::Windows::Forms::Button());
			this->AlveolarLateralClick = (gcnew System::Windows::Forms::Button());
			this->ConsonantsOPic = (gcnew System::Windows::Forms::PictureBox());
			this->VoicelessLabialVelarFricative = (gcnew System::Windows::Forms::Button());
			this->VoicedLabialVelarApproximant = (gcnew System::Windows::Forms::Button());
			this->VoicedLabialPalatalApproximant = (gcnew System::Windows::Forms::Button());
			this->VoicelessEpiglottalFricative = (gcnew System::Windows::Forms::Button());
			this->VoicedEpiglottalFricative = (gcnew System::Windows::Forms::Button());
			this->EpiglottalPlosive = (gcnew System::Windows::Forms::Button());
			this->UnvoicedAlveoloPalatalFricative = (gcnew System::Windows::Forms::Button());
			this->VoicedAlveoloPalatalFricative = (gcnew System::Windows::Forms::Button());
			this->UnvoicedPostalveoloVelarFricative = (gcnew System::Windows::Forms::Button());
			this->VoicedAlveolarLateralFlap = (gcnew System::Windows::Forms::Button());
			this->LinkAbove = (gcnew System::Windows::Forms::Button());
			this->LinkBelow = (gcnew System::Windows::Forms::Button());
			this->VowelsPic = (gcnew System::Windows::Forms::PictureBox());
			this->CloseFrontUnrounded = (gcnew System::Windows::Forms::Button());
			this->CloseFrontRounded = (gcnew System::Windows::Forms::Button());
			this->CloseMidFrontUnrounded = (gcnew System::Windows::Forms::Button());
			this->NearCloseNearFrontUnrounded = (gcnew System::Windows::Forms::Button());
			this->NearCloseNearFrontRounded = (gcnew System::Windows::Forms::Button());
			this->CloseCentralUnrounded = (gcnew System::Windows::Forms::Button());
			this->CloseCentralRounded = (gcnew System::Windows::Forms::Button());
			this->CloseBackUnrounded = (gcnew System::Windows::Forms::Button());
			this->CloseBackRounded = (gcnew System::Windows::Forms::Button());
			this->CloseMidBackRounded = (gcnew System::Windows::Forms::Button());
			this->CloseMidBackUnrounded = (gcnew System::Windows::Forms::Button());
			this->NearCloseNearBackRounded = (gcnew System::Windows::Forms::Button());
			this->CloseMidCentralRounded = (gcnew System::Windows::Forms::Button());
			this->CloseMidCentralUnrounded = (gcnew System::Windows::Forms::Button());
			this->CloseMidFrontRounded = (gcnew System::Windows::Forms::Button());
			this->OpenMidFrontUnrounded = (gcnew System::Windows::Forms::Button());
			this->OpenMidFrontRounded = (gcnew System::Windows::Forms::Button());
			this->OpenMidCentralUnrounded = (gcnew System::Windows::Forms::Button());
			this->OpenMidCentralRounded = (gcnew System::Windows::Forms::Button());
			this->OpenMidBackUnrounded = (gcnew System::Windows::Forms::Button());
			this->OpenMidBackRounded = (gcnew System::Windows::Forms::Button());
			this->OpenBackRounded = (gcnew System::Windows::Forms::Button());
			this->OpenBackUnrounded = (gcnew System::Windows::Forms::Button());
			this->OpenFrontRounded = (gcnew System::Windows::Forms::Button());
			this->OpenFrontUnrounded = (gcnew System::Windows::Forms::Button());
			this->NearOpenFrontUnrounded = (gcnew System::Windows::Forms::Button());
			this->NearOpenCentral = (gcnew System::Windows::Forms::Button());
			this->MidCentral = (gcnew System::Windows::Forms::Button());
			this->DiacriticsPic = (gcnew System::Windows::Forms::PictureBox());
			this->Voiceless = (gcnew System::Windows::Forms::Button());
			this->Voiced = (gcnew System::Windows::Forms::Button());
			this->Aspirated = (gcnew System::Windows::Forms::Button());
			this->MoreRounded = (gcnew System::Windows::Forms::Button());
			this->LessRounded = (gcnew System::Windows::Forms::Button());
			this->Advanced = (gcnew System::Windows::Forms::Button());
			this->Retracted = (gcnew System::Windows::Forms::Button());
			this->Centralized = (gcnew System::Windows::Forms::Button());
			this->MidCentralised = (gcnew System::Windows::Forms::Button());
			this->Syllabic = (gcnew System::Windows::Forms::Button());
			this->NonSyllabic = (gcnew System::Windows::Forms::Button());
			this->Rhoticity = (gcnew System::Windows::Forms::Button());
			this->BreathyVoiced = (gcnew System::Windows::Forms::Button());
			this->CreakyVoiced = (gcnew System::Windows::Forms::Button());
			this->Linguolabial = (gcnew System::Windows::Forms::Button());
			this->Labialized = (gcnew System::Windows::Forms::Button());
			this->Palatalized = (gcnew System::Windows::Forms::Button());
			this->Velarized = (gcnew System::Windows::Forms::Button());
			this->Pharyngealized = (gcnew System::Windows::Forms::Button());
			this->VelarizedOrPharyngealized = (gcnew System::Windows::Forms::Button());
			this->Raised = (gcnew System::Windows::Forms::Button());
			this->Lowered = (gcnew System::Windows::Forms::Button());
			this->AdvancedToungeRoot = (gcnew System::Windows::Forms::Button());
			this->RetractedToungeRoot = (gcnew System::Windows::Forms::Button());
			this->Dental = (gcnew System::Windows::Forms::Button());
			this->Apical = (gcnew System::Windows::Forms::Button());
			this->Laminal = (gcnew System::Windows::Forms::Button());
			this->Nasalized = (gcnew System::Windows::Forms::Button());
			this->NasalRelease = (gcnew System::Windows::Forms::Button());
			this->LateralRelease = (gcnew System::Windows::Forms::Button());
			this->NoAudibleRelease = (gcnew System::Windows::Forms::Button());
			this->SuprasegmantalsPic = (gcnew System::Windows::Forms::PictureBox());
			this->TonesAndWordAccentsPic = (gcnew System::Windows::Forms::PictureBox());
			this->PrimaryStress = (gcnew System::Windows::Forms::Button());
			this->SecondaryStress = (gcnew System::Windows::Forms::Button());
			this->Long = (gcnew System::Windows::Forms::Button());
			this->HalfLong = (gcnew System::Windows::Forms::Button());
			this->ExtraShort = (gcnew System::Windows::Forms::Button());
			this->MinorFootGroup = (gcnew System::Windows::Forms::Button());
			this->MajorIntonationGroup = (gcnew System::Windows::Forms::Button());
			this->SyllableBreak = (gcnew System::Windows::Forms::Button());
			this->Linking = (gcnew System::Windows::Forms::Button());
			this->ExtraHighDiacritic = (gcnew System::Windows::Forms::Button());
			this->ExtraHigh = (gcnew System::Windows::Forms::Button());
			this->High = (gcnew System::Windows::Forms::Button());
			this->HighDiacritic = (gcnew System::Windows::Forms::Button());
			this->MidDiacritic = (gcnew System::Windows::Forms::Button());
			this->Mid = (gcnew System::Windows::Forms::Button());
			this->Low = (gcnew System::Windows::Forms::Button());
			this->LowDiacritic = (gcnew System::Windows::Forms::Button());
			this->ExtraLowDiacritic = (gcnew System::Windows::Forms::Button());
			this->ExtraLow = (gcnew System::Windows::Forms::Button());
			this->DownStep = (gcnew System::Windows::Forms::Button());
			this->Upstep = (gcnew System::Windows::Forms::Button());
			this->GlobalFall = (gcnew System::Windows::Forms::Button());
			this->GlobalRise = (gcnew System::Windows::Forms::Button());
			this->RisingFallingDiacritic = (gcnew System::Windows::Forms::Button());
			this->LowRisingDiacritic = (gcnew System::Windows::Forms::Button());
			this->HighRisingDiactritic = (gcnew System::Windows::Forms::Button());
			this->FallingDiacritic = (gcnew System::Windows::Forms::Button());
			this->RisingDiacritic = (gcnew System::Windows::Forms::Button());
			this->Rising = (gcnew System::Windows::Forms::Button());
			this->Falling = (gcnew System::Windows::Forms::Button());
			this->HighRising = (gcnew System::Windows::Forms::Button());
			this->LowRising = (gcnew System::Windows::Forms::Button());
			this->RisingFalling = (gcnew System::Windows::Forms::Button());
			this->Slashes = (gcnew System::Windows::Forms::Button());
			this->SquareBrackets = (gcnew System::Windows::Forms::Button());
			this->AngleBrackets = (gcnew System::Windows::Forms::Button());
			this->CurlyBrackets = (gcnew System::Windows::Forms::Button());
			this->Parentheses = (gcnew System::Windows::Forms::Button());
			this->DoubleParentheses = (gcnew System::Windows::Forms::Button());
			this->DoubleSquareBrackets = (gcnew System::Windows::Forms::Button());
			this->DoubleSlashes = (gcnew System::Windows::Forms::Button());
			this->DoubleAngleBrackets = (gcnew System::Windows::Forms::Button());
			this->Backspace = (gcnew System::Windows::Forms::Button());
			this->Enter = (gcnew System::Windows::Forms::Button());
			this->VoicelessAbove = (gcnew System::Windows::Forms::Button());
			this->MoreRoundedAbove = (gcnew System::Windows::Forms::Button());
			this->LessRoundedAbove = (gcnew System::Windows::Forms::Button());
			this->RetractedAbove = (gcnew System::Windows::Forms::Button());
			this->SyllabicAbove = (gcnew System::Windows::Forms::Button());
			this->NonSyllabicAbove = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->DentalAbove = (gcnew System::Windows::Forms::Button());
			this->Tilde = (gcnew System::Windows::Forms::Button());
			this->Space = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConsonantsPPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConsonantsNPPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConsonantsOPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VowelsPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DiacriticsPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SuprasegmantalsPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TonesAndWordAccentsPic))->BeginInit();
			this->SuspendLayout();
			// 
			// input
			// 
			this->input->BackColor = System::Drawing::Color::Silver;
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->input->ForeColor = System::Drawing::Color::Black;
			this->input->Location = System::Drawing::Point(48, 33);
			this->input->Name = L"input";
			this->input->Padding = System::Windows::Forms::Padding(8);
			this->input->Size = System::Drawing::Size(1057, 71);
			this->input->TabIndex = 0;
			// 
			// ConsonantsP
			// 
			this->ConsonantsP->Location = System::Drawing::Point(58, 571);
			this->ConsonantsP->Name = L"ConsonantsP";
			this->ConsonantsP->Size = System::Drawing::Size(104, 45);
			this->ConsonantsP->TabIndex = 1;
			this->ConsonantsP->Text = L"Consonants (Pulmonic)";
			this->ConsonantsP->UseVisualStyleBackColor = true;
			this->ConsonantsP->Click += gcnew System::EventHandler(this, &MyForm::ConsonantsP_Click);
			// 
			// Diacritics
			// 
			this->Diacritics->Location = System::Drawing::Point(658, 571);
			this->Diacritics->Name = L"Diacritics";
			this->Diacritics->Size = System::Drawing::Size(104, 45);
			this->Diacritics->TabIndex = 2;
			this->Diacritics->Text = L"Diacritics";
			this->Diacritics->UseVisualStyleBackColor = true;
			this->Diacritics->Click += gcnew System::EventHandler(this, &MyForm::Diacritics_Click);
			// 
			// Vowels
			// 
			this->Vowels->Location = System::Drawing::Point(413, 571);
			this->Vowels->Name = L"Vowels";
			this->Vowels->Size = System::Drawing::Size(104, 45);
			this->Vowels->TabIndex = 3;
			this->Vowels->Text = L"Vowels";
			this->Vowels->UseVisualStyleBackColor = true;
			this->Vowels->Click += gcnew System::EventHandler(this, &MyForm::Vowels_Click);
			// 
			// Other
			// 
			this->Other->Location = System::Drawing::Point(928, 571);
			this->Other->Name = L"Other";
			this->Other->Size = System::Drawing::Size(104, 45);
			this->Other->TabIndex = 4;
			this->Other->Text = L"Other";
			this->Other->UseVisualStyleBackColor = true;
			this->Other->Click += gcnew System::EventHandler(this, &MyForm::Other_Click);
			// 
			// ConsonantsPPic
			// 
			this->ConsonantsPPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConsonantsPPic.Image")));
			this->ConsonantsPPic->Location = System::Drawing::Point(63, 224);
			this->ConsonantsPPic->Name = L"ConsonantsPPic";
			this->ConsonantsPPic->Size = System::Drawing::Size(986, 333);
			this->ConsonantsPPic->TabIndex = 5;
			this->ConsonantsPPic->TabStop = false;
			// 
			// UnvoicedBilabialPlosive
			// 
			this->UnvoicedBilabialPlosive->Location = System::Drawing::Point(179, 265);
			this->UnvoicedBilabialPlosive->Name = L"UnvoicedBilabialPlosive";
			this->UnvoicedBilabialPlosive->Size = System::Drawing::Size(31, 32);
			this->UnvoicedBilabialPlosive->TabIndex = 6;
			this->UnvoicedBilabialPlosive->Text = L"p";
			this->UnvoicedBilabialPlosive->UseVisualStyleBackColor = true;
			this->UnvoicedBilabialPlosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// BilabialNasal
			// 
			this->BilabialNasal->Location = System::Drawing::Point(214, 301);
			this->BilabialNasal->Name = L"BilabialNasal";
			this->BilabialNasal->Size = System::Drawing::Size(31, 32);
			this->BilabialNasal->TabIndex = 6;
			this->BilabialNasal->Text = L"m";
			this->BilabialNasal->UseVisualStyleBackColor = true;
			this->BilabialNasal->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedBilabialPlosive
			// 
			this->VoicedBilabialPlosive->Location = System::Drawing::Point(214, 265);
			this->VoicedBilabialPlosive->Name = L"VoicedBilabialPlosive";
			this->VoicedBilabialPlosive->Size = System::Drawing::Size(31, 32);
			this->VoicedBilabialPlosive->TabIndex = 6;
			this->VoicedBilabialPlosive->Text = L"b";
			this->VoicedBilabialPlosive->UseVisualStyleBackColor = true;
			this->VoicedBilabialPlosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// BilabialTrill
			// 
			this->BilabialTrill->Location = System::Drawing::Point(214, 339);
			this->BilabialTrill->Name = L"BilabialTrill";
			this->BilabialTrill->Size = System::Drawing::Size(31, 32);
			this->BilabialTrill->TabIndex = 6;
			this->BilabialTrill->Text = L"ʙ";
			this->BilabialTrill->UseVisualStyleBackColor = true;
			this->BilabialTrill->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// LabiodentalNasal
			// 
			this->LabiodentalNasal->Location = System::Drawing::Point(302, 301);
			this->LabiodentalNasal->Name = L"LabiodentalNasal";
			this->LabiodentalNasal->Size = System::Drawing::Size(31, 32);
			this->LabiodentalNasal->TabIndex = 6;
			this->LabiodentalNasal->Text = L"ɱ";
			this->LabiodentalNasal->UseVisualStyleBackColor = true;
			this->LabiodentalNasal->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedBilabialFricative
			// 
			this->UnvoicedBilabialFricative->Location = System::Drawing::Point(179, 411);
			this->UnvoicedBilabialFricative->Name = L"UnvoicedBilabialFricative";
			this->UnvoicedBilabialFricative->Size = System::Drawing::Size(31, 32);
			this->UnvoicedBilabialFricative->TabIndex = 6;
			this->UnvoicedBilabialFricative->Text = L"ɸ";
			this->UnvoicedBilabialFricative->UseVisualStyleBackColor = true;
			this->UnvoicedBilabialFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedBilabialFricative
			// 
			this->VoicedBilabialFricative->Location = System::Drawing::Point(216, 411);
			this->VoicedBilabialFricative->Name = L"VoicedBilabialFricative";
			this->VoicedBilabialFricative->Size = System::Drawing::Size(31, 32);
			this->VoicedBilabialFricative->TabIndex = 6;
			this->VoicedBilabialFricative->Text = L"β";
			this->VoicedBilabialFricative->UseVisualStyleBackColor = true;
			this->VoicedBilabialFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedAlveolarPlosive
			// 
			this->UnvoicedAlveolarPlosive->Location = System::Drawing::Point(417, 265);
			this->UnvoicedAlveolarPlosive->Name = L"UnvoicedAlveolarPlosive";
			this->UnvoicedAlveolarPlosive->Size = System::Drawing::Size(31, 32);
			this->UnvoicedAlveolarPlosive->TabIndex = 6;
			this->UnvoicedAlveolarPlosive->Text = L"t";
			this->UnvoicedAlveolarPlosive->UseVisualStyleBackColor = true;
			this->UnvoicedAlveolarPlosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedAlveolarPlosive
			// 
			this->VoicedAlveolarPlosive->Location = System::Drawing::Point(454, 265);
			this->VoicedAlveolarPlosive->Name = L"VoicedAlveolarPlosive";
			this->VoicedAlveolarPlosive->Size = System::Drawing::Size(31, 32);
			this->VoicedAlveolarPlosive->TabIndex = 6;
			this->VoicedAlveolarPlosive->Text = L"d";
			this->VoicedAlveolarPlosive->UseVisualStyleBackColor = true;
			this->VoicedAlveolarPlosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// AlveolarNasal
			// 
			this->AlveolarNasal->Location = System::Drawing::Point(454, 301);
			this->AlveolarNasal->Name = L"AlveolarNasal";
			this->AlveolarNasal->Size = System::Drawing::Size(31, 32);
			this->AlveolarNasal->TabIndex = 6;
			this->AlveolarNasal->Text = L"n";
			this->AlveolarNasal->UseVisualStyleBackColor = true;
			this->AlveolarNasal->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// AlveolarTrill
			// 
			this->AlveolarTrill->Location = System::Drawing::Point(454, 339);
			this->AlveolarTrill->Name = L"AlveolarTrill";
			this->AlveolarTrill->Size = System::Drawing::Size(31, 32);
			this->AlveolarTrill->TabIndex = 6;
			this->AlveolarTrill->Text = L"r";
			this->AlveolarTrill->UseVisualStyleBackColor = true;
			this->AlveolarTrill->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// AlveolarTap
			// 
			this->AlveolarTap->Location = System::Drawing::Point(454, 377);
			this->AlveolarTap->Name = L"AlveolarTap";
			this->AlveolarTap->Size = System::Drawing::Size(31, 32);
			this->AlveolarTap->TabIndex = 6;
			this->AlveolarTap->Text = L"ɾ";
			this->AlveolarTap->UseVisualStyleBackColor = true;
			this->AlveolarTap->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedAlveolarFricative
			// 
			this->VoicedAlveolarFricative->Location = System::Drawing::Point(454, 411);
			this->VoicedAlveolarFricative->Name = L"VoicedAlveolarFricative";
			this->VoicedAlveolarFricative->Size = System::Drawing::Size(31, 32);
			this->VoicedAlveolarFricative->TabIndex = 6;
			this->VoicedAlveolarFricative->Text = L"z";
			this->VoicedAlveolarFricative->UseVisualStyleBackColor = true;
			this->VoicedAlveolarFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedAlveolarFricative
			// 
			this->UnvoicedAlveolarFricative->Location = System::Drawing::Point(417, 411);
			this->UnvoicedAlveolarFricative->Name = L"UnvoicedAlveolarFricative";
			this->UnvoicedAlveolarFricative->Size = System::Drawing::Size(31, 32);
			this->UnvoicedAlveolarFricative->TabIndex = 6;
			this->UnvoicedAlveolarFricative->Text = L"s";
			this->UnvoicedAlveolarFricative->UseVisualStyleBackColor = true;
			this->UnvoicedAlveolarFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedDentalFricative
			// 
			this->VoicedDentalFricative->Location = System::Drawing::Point(380, 411);
			this->VoicedDentalFricative->Name = L"VoicedDentalFricative";
			this->VoicedDentalFricative->Size = System::Drawing::Size(31, 32);
			this->VoicedDentalFricative->TabIndex = 6;
			this->VoicedDentalFricative->Text = L"ð";
			this->VoicedDentalFricative->UseVisualStyleBackColor = true;
			this->VoicedDentalFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedDentalFricative
			// 
			this->UnvoicedDentalFricative->Location = System::Drawing::Point(343, 411);
			this->UnvoicedDentalFricative->Name = L"UnvoicedDentalFricative";
			this->UnvoicedDentalFricative->Size = System::Drawing::Size(31, 32);
			this->UnvoicedDentalFricative->TabIndex = 6;
			this->UnvoicedDentalFricative->Text = L"θ";
			this->UnvoicedDentalFricative->UseVisualStyleBackColor = true;
			this->UnvoicedDentalFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedLabiodentalFricative
			// 
			this->VoicedLabiodentalFricative->Location = System::Drawing::Point(302, 411);
			this->VoicedLabiodentalFricative->Name = L"VoicedLabiodentalFricative";
			this->VoicedLabiodentalFricative->Size = System::Drawing::Size(31, 32);
			this->VoicedLabiodentalFricative->TabIndex = 6;
			this->VoicedLabiodentalFricative->Text = L"v";
			this->VoicedLabiodentalFricative->UseVisualStyleBackColor = true;
			this->VoicedLabiodentalFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedLabiodentalFricative
			// 
			this->UnvoicedLabiodentalFricative->Location = System::Drawing::Point(265, 411);
			this->UnvoicedLabiodentalFricative->Name = L"UnvoicedLabiodentalFricative";
			this->UnvoicedLabiodentalFricative->Size = System::Drawing::Size(31, 32);
			this->UnvoicedLabiodentalFricative->TabIndex = 6;
			this->UnvoicedLabiodentalFricative->Text = L"f";
			this->UnvoicedLabiodentalFricative->UseVisualStyleBackColor = true;
			this->UnvoicedLabiodentalFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// LabiodentalFlap
			// 
			this->LabiodentalFlap->Location = System::Drawing::Point(302, 373);
			this->LabiodentalFlap->Name = L"LabiodentalFlap";
			this->LabiodentalFlap->Size = System::Drawing::Size(31, 32);
			this->LabiodentalFlap->TabIndex = 6;
			this->LabiodentalFlap->Text = L"ⱱ";
			this->LabiodentalFlap->UseVisualStyleBackColor = true;
			this->LabiodentalFlap->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// LabiodentalApproximant
			// 
			this->LabiodentalApproximant->Location = System::Drawing::Point(302, 484);
			this->LabiodentalApproximant->Name = L"LabiodentalApproximant";
			this->LabiodentalApproximant->Size = System::Drawing::Size(31, 32);
			this->LabiodentalApproximant->TabIndex = 6;
			this->LabiodentalApproximant->Text = L"ʋ";
			this->LabiodentalApproximant->UseVisualStyleBackColor = true;
			this->LabiodentalApproximant->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedAlveolarLateralFricative
			// 
			this->UnvoicedAlveolarLateralFricative->Location = System::Drawing::Point(417, 449);
			this->UnvoicedAlveolarLateralFricative->Name = L"UnvoicedAlveolarLateralFricative";
			this->UnvoicedAlveolarLateralFricative->Size = System::Drawing::Size(31, 32);
			this->UnvoicedAlveolarLateralFricative->TabIndex = 6;
			this->UnvoicedAlveolarLateralFricative->Text = L"ɬ";
			this->UnvoicedAlveolarLateralFricative->UseVisualStyleBackColor = true;
			this->UnvoicedAlveolarLateralFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedAlveolarLateralFricative
			// 
			this->VoicedAlveolarLateralFricative->Location = System::Drawing::Point(454, 449);
			this->VoicedAlveolarLateralFricative->Name = L"VoicedAlveolarLateralFricative";
			this->VoicedAlveolarLateralFricative->Size = System::Drawing::Size(31, 32);
			this->VoicedAlveolarLateralFricative->TabIndex = 6;
			this->VoicedAlveolarLateralFricative->Text = L"ɮ";
			this->VoicedAlveolarLateralFricative->UseVisualStyleBackColor = true;
			this->VoicedAlveolarLateralFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedPostalveolarFricative
			// 
			this->UnvoicedPostalveolarFricative->Location = System::Drawing::Point(491, 411);
			this->UnvoicedPostalveolarFricative->Name = L"UnvoicedPostalveolarFricative";
			this->UnvoicedPostalveolarFricative->Size = System::Drawing::Size(31, 32);
			this->UnvoicedPostalveolarFricative->TabIndex = 6;
			this->UnvoicedPostalveolarFricative->Text = L"ʃ";
			this->UnvoicedPostalveolarFricative->UseVisualStyleBackColor = true;
			this->UnvoicedPostalveolarFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedPostalveolarFricative
			// 
			this->VoicedPostalveolarFricative->Location = System::Drawing::Point(537, 411);
			this->VoicedPostalveolarFricative->Name = L"VoicedPostalveolarFricative";
			this->VoicedPostalveolarFricative->Size = System::Drawing::Size(31, 32);
			this->VoicedPostalveolarFricative->TabIndex = 6;
			this->VoicedPostalveolarFricative->Text = L"ʒ";
			this->VoicedPostalveolarFricative->UseVisualStyleBackColor = true;
			this->VoicedPostalveolarFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// AlveolarApproximant
			// 
			this->AlveolarApproximant->Location = System::Drawing::Point(454, 484);
			this->AlveolarApproximant->Name = L"AlveolarApproximant";
			this->AlveolarApproximant->Size = System::Drawing::Size(31, 32);
			this->AlveolarApproximant->TabIndex = 6;
			this->AlveolarApproximant->Text = L"ɹ";
			this->AlveolarApproximant->UseVisualStyleBackColor = true;
			this->AlveolarApproximant->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// AlveolarLateralApproximant
			// 
			this->AlveolarLateralApproximant->Location = System::Drawing::Point(454, 522);
			this->AlveolarLateralApproximant->Name = L"AlveolarLateralApproximant";
			this->AlveolarLateralApproximant->Size = System::Drawing::Size(31, 32);
			this->AlveolarLateralApproximant->TabIndex = 6;
			this->AlveolarLateralApproximant->Text = L"l";
			this->AlveolarLateralApproximant->UseVisualStyleBackColor = true;
			this->AlveolarLateralApproximant->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// RetroflexFlap
			// 
			this->RetroflexFlap->Location = System::Drawing::Point(616, 373);
			this->RetroflexFlap->Name = L"RetroflexFlap";
			this->RetroflexFlap->Size = System::Drawing::Size(31, 32);
			this->RetroflexFlap->TabIndex = 6;
			this->RetroflexFlap->Text = L"ɽ";
			this->RetroflexFlap->UseVisualStyleBackColor = true;
			this->RetroflexFlap->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedRetroflexFricative
			// 
			this->VoicedRetroflexFricative->Location = System::Drawing::Point(616, 411);
			this->VoicedRetroflexFricative->Name = L"VoicedRetroflexFricative";
			this->VoicedRetroflexFricative->Size = System::Drawing::Size(31, 32);
			this->VoicedRetroflexFricative->TabIndex = 6;
			this->VoicedRetroflexFricative->Text = L"ʐ";
			this->VoicedRetroflexFricative->UseVisualStyleBackColor = true;
			this->VoicedRetroflexFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedRetroflexFricative
			// 
			this->UnvoicedRetroflexFricative->Location = System::Drawing::Point(579, 411);
			this->UnvoicedRetroflexFricative->Name = L"UnvoicedRetroflexFricative";
			this->UnvoicedRetroflexFricative->Size = System::Drawing::Size(31, 32);
			this->UnvoicedRetroflexFricative->TabIndex = 6;
			this->UnvoicedRetroflexFricative->Text = L"ʂ";
			this->UnvoicedRetroflexFricative->UseVisualStyleBackColor = true;
			this->UnvoicedRetroflexFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedRetroflexPlosive
			// 
			this->UnvoicedRetroflexPlosive->Location = System::Drawing::Point(579, 265);
			this->UnvoicedRetroflexPlosive->Name = L"UnvoicedRetroflexPlosive";
			this->UnvoicedRetroflexPlosive->Size = System::Drawing::Size(31, 32);
			this->UnvoicedRetroflexPlosive->TabIndex = 6;
			this->UnvoicedRetroflexPlosive->Text = L"ʈ";
			this->UnvoicedRetroflexPlosive->UseVisualStyleBackColor = true;
			this->UnvoicedRetroflexPlosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedRetroflexPlosive
			// 
			this->VoicedRetroflexPlosive->Location = System::Drawing::Point(616, 265);
			this->VoicedRetroflexPlosive->Name = L"VoicedRetroflexPlosive";
			this->VoicedRetroflexPlosive->Size = System::Drawing::Size(31, 32);
			this->VoicedRetroflexPlosive->TabIndex = 6;
			this->VoicedRetroflexPlosive->Text = L"ɖ";
			this->VoicedRetroflexPlosive->UseVisualStyleBackColor = true;
			this->VoicedRetroflexPlosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// RetroflexNasal
			// 
			this->RetroflexNasal->Location = System::Drawing::Point(616, 301);
			this->RetroflexNasal->Name = L"RetroflexNasal";
			this->RetroflexNasal->Size = System::Drawing::Size(31, 32);
			this->RetroflexNasal->TabIndex = 6;
			this->RetroflexNasal->Text = L"ɳ";
			this->RetroflexNasal->UseVisualStyleBackColor = true;
			this->RetroflexNasal->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedPalatalPlosive
			// 
			this->UnvoicedPalatalPlosive->Location = System::Drawing::Point(653, 265);
			this->UnvoicedPalatalPlosive->Name = L"UnvoicedPalatalPlosive";
			this->UnvoicedPalatalPlosive->Size = System::Drawing::Size(31, 32);
			this->UnvoicedPalatalPlosive->TabIndex = 6;
			this->UnvoicedPalatalPlosive->Text = L"c";
			this->UnvoicedPalatalPlosive->UseVisualStyleBackColor = true;
			this->UnvoicedPalatalPlosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedPalatalPlosive
			// 
			this->VoicedPalatalPlosive->Location = System::Drawing::Point(690, 265);
			this->VoicedPalatalPlosive->Name = L"VoicedPalatalPlosive";
			this->VoicedPalatalPlosive->Size = System::Drawing::Size(31, 32);
			this->VoicedPalatalPlosive->TabIndex = 6;
			this->VoicedPalatalPlosive->Text = L"ɟ";
			this->VoicedPalatalPlosive->UseVisualStyleBackColor = true;
			this->VoicedPalatalPlosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedVelarPlosive
			// 
			this->UnvoicedVelarPlosive->Location = System::Drawing::Point(736, 265);
			this->UnvoicedVelarPlosive->Name = L"UnvoicedVelarPlosive";
			this->UnvoicedVelarPlosive->Size = System::Drawing::Size(31, 32);
			this->UnvoicedVelarPlosive->TabIndex = 6;
			this->UnvoicedVelarPlosive->Text = L"k";
			this->UnvoicedVelarPlosive->UseVisualStyleBackColor = true;
			this->UnvoicedVelarPlosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedVelarPlosive
			// 
			this->VoicedVelarPlosive->Location = System::Drawing::Point(773, 265);
			this->VoicedVelarPlosive->Name = L"VoicedVelarPlosive";
			this->VoicedVelarPlosive->Size = System::Drawing::Size(31, 32);
			this->VoicedVelarPlosive->TabIndex = 6;
			this->VoicedVelarPlosive->Text = L"ɡ";
			this->VoicedVelarPlosive->UseVisualStyleBackColor = true;
			this->VoicedVelarPlosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedUvularPlosive
			// 
			this->UnvoicedUvularPlosive->Location = System::Drawing::Point(810, 265);
			this->UnvoicedUvularPlosive->Name = L"UnvoicedUvularPlosive";
			this->UnvoicedUvularPlosive->Size = System::Drawing::Size(31, 32);
			this->UnvoicedUvularPlosive->TabIndex = 6;
			this->UnvoicedUvularPlosive->Text = L"q";
			this->UnvoicedUvularPlosive->UseVisualStyleBackColor = true;
			this->UnvoicedUvularPlosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedUvularPlosive
			// 
			this->VoicedUvularPlosive->Location = System::Drawing::Point(847, 265);
			this->VoicedUvularPlosive->Name = L"VoicedUvularPlosive";
			this->VoicedUvularPlosive->Size = System::Drawing::Size(31, 32);
			this->VoicedUvularPlosive->TabIndex = 6;
			this->VoicedUvularPlosive->Text = L"ɢ";
			this->VoicedUvularPlosive->UseVisualStyleBackColor = true;
			this->VoicedUvularPlosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// GlottalPlosive
			// 
			this->GlottalPlosive->Location = System::Drawing::Point(975, 265);
			this->GlottalPlosive->Name = L"GlottalPlosive";
			this->GlottalPlosive->Size = System::Drawing::Size(31, 32);
			this->GlottalPlosive->TabIndex = 6;
			this->GlottalPlosive->Text = L"ʔ";
			this->GlottalPlosive->UseVisualStyleBackColor = true;
			this->GlottalPlosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VelarNasal
			// 
			this->VelarNasal->Location = System::Drawing::Point(773, 303);
			this->VelarNasal->Name = L"VelarNasal";
			this->VelarNasal->Size = System::Drawing::Size(31, 32);
			this->VelarNasal->TabIndex = 6;
			this->VelarNasal->Text = L"ŋ";
			this->VelarNasal->UseVisualStyleBackColor = true;
			this->VelarNasal->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// PalatalNasal
			// 
			this->PalatalNasal->Location = System::Drawing::Point(690, 303);
			this->PalatalNasal->Name = L"PalatalNasal";
			this->PalatalNasal->Size = System::Drawing::Size(31, 32);
			this->PalatalNasal->TabIndex = 6;
			this->PalatalNasal->Text = L"ɲ";
			this->PalatalNasal->UseVisualStyleBackColor = true;
			this->PalatalNasal->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UvularNasal
			// 
			this->UvularNasal->Location = System::Drawing::Point(847, 303);
			this->UvularNasal->Name = L"UvularNasal";
			this->UvularNasal->Size = System::Drawing::Size(31, 32);
			this->UvularNasal->TabIndex = 6;
			this->UvularNasal->Text = L"ɴ";
			this->UvularNasal->UseVisualStyleBackColor = true;
			this->UvularNasal->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UvularTrill
			// 
			this->UvularTrill->Location = System::Drawing::Point(847, 339);
			this->UvularTrill->Name = L"UvularTrill";
			this->UvularTrill->Size = System::Drawing::Size(31, 32);
			this->UvularTrill->TabIndex = 6;
			this->UvularTrill->Text = L"ʀ";
			this->UvularTrill->UseVisualStyleBackColor = true;
			this->UvularTrill->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedUvularFricative
			// 
			this->VoicedUvularFricative->Location = System::Drawing::Point(847, 411);
			this->VoicedUvularFricative->Name = L"VoicedUvularFricative";
			this->VoicedUvularFricative->Size = System::Drawing::Size(31, 32);
			this->VoicedUvularFricative->TabIndex = 6;
			this->VoicedUvularFricative->Text = L"ʁ";
			this->VoicedUvularFricative->UseVisualStyleBackColor = true;
			this->VoicedUvularFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedUvularFricative
			// 
			this->UnvoicedUvularFricative->Location = System::Drawing::Point(810, 411);
			this->UnvoicedUvularFricative->Name = L"UnvoicedUvularFricative";
			this->UnvoicedUvularFricative->Size = System::Drawing::Size(31, 32);
			this->UnvoicedUvularFricative->TabIndex = 6;
			this->UnvoicedUvularFricative->Text = L"χ";
			this->UnvoicedUvularFricative->UseVisualStyleBackColor = true;
			this->UnvoicedUvularFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedVelarFricative
			// 
			this->VoicedVelarFricative->Location = System::Drawing::Point(773, 411);
			this->VoicedVelarFricative->Name = L"VoicedVelarFricative";
			this->VoicedVelarFricative->Size = System::Drawing::Size(31, 32);
			this->VoicedVelarFricative->TabIndex = 6;
			this->VoicedVelarFricative->Text = L"ɣ";
			this->VoicedVelarFricative->UseVisualStyleBackColor = true;
			this->VoicedVelarFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedVelarFricative
			// 
			this->UnvoicedVelarFricative->Location = System::Drawing::Point(736, 411);
			this->UnvoicedVelarFricative->Name = L"UnvoicedVelarFricative";
			this->UnvoicedVelarFricative->Size = System::Drawing::Size(31, 32);
			this->UnvoicedVelarFricative->TabIndex = 6;
			this->UnvoicedVelarFricative->Text = L"x";
			this->UnvoicedVelarFricative->UseVisualStyleBackColor = true;
			this->UnvoicedVelarFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedPalatalFricative
			// 
			this->VoicedPalatalFricative->Location = System::Drawing::Point(690, 411);
			this->VoicedPalatalFricative->Name = L"VoicedPalatalFricative";
			this->VoicedPalatalFricative->Size = System::Drawing::Size(31, 32);
			this->VoicedPalatalFricative->TabIndex = 6;
			this->VoicedPalatalFricative->Text = L"ʝ";
			this->VoicedPalatalFricative->UseVisualStyleBackColor = true;
			this->VoicedPalatalFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedPalatalFricative
			// 
			this->UnvoicedPalatalFricative->Location = System::Drawing::Point(653, 411);
			this->UnvoicedPalatalFricative->Name = L"UnvoicedPalatalFricative";
			this->UnvoicedPalatalFricative->Size = System::Drawing::Size(31, 32);
			this->UnvoicedPalatalFricative->TabIndex = 6;
			this->UnvoicedPalatalFricative->Text = L"ç";
			this->UnvoicedPalatalFricative->UseVisualStyleBackColor = true;
			this->UnvoicedPalatalFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedPharyngealFricative
			// 
			this->UnvoicedPharyngealFricative->Location = System::Drawing::Point(894, 411);
			this->UnvoicedPharyngealFricative->Name = L"UnvoicedPharyngealFricative";
			this->UnvoicedPharyngealFricative->Size = System::Drawing::Size(31, 32);
			this->UnvoicedPharyngealFricative->TabIndex = 6;
			this->UnvoicedPharyngealFricative->Text = L"ħ";
			this->UnvoicedPharyngealFricative->UseVisualStyleBackColor = true;
			this->UnvoicedPharyngealFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedPharyngealFricative
			// 
			this->VoicedPharyngealFricative->Location = System::Drawing::Point(931, 411);
			this->VoicedPharyngealFricative->Name = L"VoicedPharyngealFricative";
			this->VoicedPharyngealFricative->Size = System::Drawing::Size(31, 32);
			this->VoicedPharyngealFricative->TabIndex = 6;
			this->VoicedPharyngealFricative->Text = L"ʕ";
			this->VoicedPharyngealFricative->UseVisualStyleBackColor = true;
			this->VoicedPharyngealFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UnvoicedGlottalFricative
			// 
			this->UnvoicedGlottalFricative->Location = System::Drawing::Point(975, 411);
			this->UnvoicedGlottalFricative->Name = L"UnvoicedGlottalFricative";
			this->UnvoicedGlottalFricative->Size = System::Drawing::Size(31, 32);
			this->UnvoicedGlottalFricative->TabIndex = 6;
			this->UnvoicedGlottalFricative->Text = L"h";
			this->UnvoicedGlottalFricative->UseVisualStyleBackColor = true;
			this->UnvoicedGlottalFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedGlottalFricative
			// 
			this->VoicedGlottalFricative->Location = System::Drawing::Point(1012, 411);
			this->VoicedGlottalFricative->Name = L"VoicedGlottalFricative";
			this->VoicedGlottalFricative->Size = System::Drawing::Size(31, 32);
			this->VoicedGlottalFricative->TabIndex = 6;
			this->VoicedGlottalFricative->Text = L"ɦ";
			this->VoicedGlottalFricative->UseVisualStyleBackColor = true;
			this->VoicedGlottalFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VelarApproximant
			// 
			this->VelarApproximant->Location = System::Drawing::Point(764, 484);
			this->VelarApproximant->Name = L"VelarApproximant";
			this->VelarApproximant->Size = System::Drawing::Size(31, 32);
			this->VelarApproximant->TabIndex = 6;
			this->VelarApproximant->Text = L"ɰ";
			this->VelarApproximant->UseVisualStyleBackColor = true;
			this->VelarApproximant->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VelarLateralApproximant
			// 
			this->VelarLateralApproximant->Location = System::Drawing::Point(764, 522);
			this->VelarLateralApproximant->Name = L"VelarLateralApproximant";
			this->VelarLateralApproximant->Size = System::Drawing::Size(31, 32);
			this->VelarLateralApproximant->TabIndex = 6;
			this->VelarLateralApproximant->Text = L"ʟ";
			this->VelarLateralApproximant->UseVisualStyleBackColor = true;
			this->VelarLateralApproximant->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// PalatalLateralApproximant
			// 
			this->PalatalLateralApproximant->Location = System::Drawing::Point(690, 522);
			this->PalatalLateralApproximant->Name = L"PalatalLateralApproximant";
			this->PalatalLateralApproximant->Size = System::Drawing::Size(31, 32);
			this->PalatalLateralApproximant->TabIndex = 6;
			this->PalatalLateralApproximant->Text = L"ʎ";
			this->PalatalLateralApproximant->UseVisualStyleBackColor = true;
			this->PalatalLateralApproximant->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// PalatalApproximant
			// 
			this->PalatalApproximant->Location = System::Drawing::Point(690, 484);
			this->PalatalApproximant->Name = L"PalatalApproximant";
			this->PalatalApproximant->Size = System::Drawing::Size(31, 32);
			this->PalatalApproximant->TabIndex = 6;
			this->PalatalApproximant->Text = L"j";
			this->PalatalApproximant->UseVisualStyleBackColor = true;
			this->PalatalApproximant->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// RetroflexApproximant
			// 
			this->RetroflexApproximant->Location = System::Drawing::Point(616, 484);
			this->RetroflexApproximant->Name = L"RetroflexApproximant";
			this->RetroflexApproximant->Size = System::Drawing::Size(31, 32);
			this->RetroflexApproximant->TabIndex = 6;
			this->RetroflexApproximant->Text = L"ɻ";
			this->RetroflexApproximant->UseVisualStyleBackColor = true;
			this->RetroflexApproximant->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// RetroflexLateralApproximant
			// 
			this->RetroflexLateralApproximant->Location = System::Drawing::Point(616, 522);
			this->RetroflexLateralApproximant->Name = L"RetroflexLateralApproximant";
			this->RetroflexLateralApproximant->Size = System::Drawing::Size(31, 32);
			this->RetroflexLateralApproximant->TabIndex = 6;
			this->RetroflexLateralApproximant->Text = L"ɭ";
			this->RetroflexLateralApproximant->UseVisualStyleBackColor = true;
			this->RetroflexLateralApproximant->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// ConsonantsNP
			// 
			this->ConsonantsNP->Location = System::Drawing::Point(168, 571);
			this->ConsonantsNP->Name = L"ConsonantsNP";
			this->ConsonantsNP->Size = System::Drawing::Size(87, 45);
			this->ConsonantsNP->TabIndex = 1;
			this->ConsonantsNP->Text = L"Consonants (Non-Pulmonic)";
			this->ConsonantsNP->UseVisualStyleBackColor = true;
			this->ConsonantsNP->Click += gcnew System::EventHandler(this, &MyForm::ConsonantsNP_Click);
			// 
			// ConsonantsO
			// 
			this->ConsonantsO->Location = System::Drawing::Point(261, 571);
			this->ConsonantsO->Name = L"ConsonantsO";
			this->ConsonantsO->Size = System::Drawing::Size(81, 45);
			this->ConsonantsO->TabIndex = 1;
			this->ConsonantsO->Text = L"Consonants (Other)";
			this->ConsonantsO->UseVisualStyleBackColor = true;
			this->ConsonantsO->Click += gcnew System::EventHandler(this, &MyForm::ConsonantsO_Click);
			// 
			// ConsonantsNPPic
			// 
			this->ConsonantsNPPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConsonantsNPPic.Image")));
			this->ConsonantsNPPic->Location = System::Drawing::Point(308, 328);
			this->ConsonantsNPPic->Name = L"ConsonantsNPPic";
			this->ConsonantsNPPic->Size = System::Drawing::Size(496, 229);
			this->ConsonantsNPPic->TabIndex = 7;
			this->ConsonantsNPPic->TabStop = false;
			this->ConsonantsNPPic->Visible = false;
			// 
			// BilabialClick
			// 
			this->BilabialClick->Location = System::Drawing::Point(320, 374);
			this->BilabialClick->Name = L"BilabialClick";
			this->BilabialClick->Size = System::Drawing::Size(27, 28);
			this->BilabialClick->TabIndex = 8;
			this->BilabialClick->Text = L"ʘ";
			this->BilabialClick->UseVisualStyleBackColor = true;
			this->BilabialClick->Visible = false;
			this->BilabialClick->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// DentalClick
			// 
			this->DentalClick->Location = System::Drawing::Point(320, 411);
			this->DentalClick->Name = L"DentalClick";
			this->DentalClick->Size = System::Drawing::Size(27, 28);
			this->DentalClick->TabIndex = 8;
			this->DentalClick->Text = L"ǀ";
			this->DentalClick->UseVisualStyleBackColor = true;
			this->DentalClick->Visible = false;
			this->DentalClick->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// AlveolarClick
			// 
			this->AlveolarClick->Location = System::Drawing::Point(320, 442);
			this->AlveolarClick->Name = L"AlveolarClick";
			this->AlveolarClick->Size = System::Drawing::Size(27, 28);
			this->AlveolarClick->TabIndex = 8;
			this->AlveolarClick->Text = L"ǃ";
			this->AlveolarClick->UseVisualStyleBackColor = true;
			this->AlveolarClick->Visible = false;
			this->AlveolarClick->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// PalatoalveolarClick
			// 
			this->PalatoalveolarClick->Location = System::Drawing::Point(320, 484);
			this->PalatoalveolarClick->Name = L"PalatoalveolarClick";
			this->PalatoalveolarClick->Size = System::Drawing::Size(27, 28);
			this->PalatoalveolarClick->TabIndex = 8;
			this->PalatoalveolarClick->Text = L"ǂ";
			this->PalatoalveolarClick->UseVisualStyleBackColor = true;
			this->PalatoalveolarClick->Visible = false;
			this->PalatoalveolarClick->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// BilabialImplosive
			// 
			this->BilabialImplosive->Location = System::Drawing::Point(480, 375);
			this->BilabialImplosive->Name = L"BilabialImplosive";
			this->BilabialImplosive->Size = System::Drawing::Size(27, 28);
			this->BilabialImplosive->TabIndex = 8;
			this->BilabialImplosive->Text = L"ɓ";
			this->BilabialImplosive->UseVisualStyleBackColor = true;
			this->BilabialImplosive->Visible = false;
			this->BilabialImplosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// DentalAlveolarImplosive
			// 
			this->DentalAlveolarImplosive->Location = System::Drawing::Point(480, 409);
			this->DentalAlveolarImplosive->Name = L"DentalAlveolarImplosive";
			this->DentalAlveolarImplosive->Size = System::Drawing::Size(27, 28);
			this->DentalAlveolarImplosive->TabIndex = 8;
			this->DentalAlveolarImplosive->Text = L"ɗ";
			this->DentalAlveolarImplosive->UseVisualStyleBackColor = true;
			this->DentalAlveolarImplosive->Visible = false;
			this->DentalAlveolarImplosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// PalatalImplosive
			// 
			this->PalatalImplosive->Location = System::Drawing::Point(480, 448);
			this->PalatalImplosive->Name = L"PalatalImplosive";
			this->PalatalImplosive->Size = System::Drawing::Size(27, 28);
			this->PalatalImplosive->TabIndex = 8;
			this->PalatalImplosive->Text = L"ʄ";
			this->PalatalImplosive->UseVisualStyleBackColor = true;
			this->PalatalImplosive->Visible = false;
			this->PalatalImplosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VelarImplosive
			// 
			this->VelarImplosive->Location = System::Drawing::Point(480, 485);
			this->VelarImplosive->Name = L"VelarImplosive";
			this->VelarImplosive->Size = System::Drawing::Size(27, 28);
			this->VelarImplosive->TabIndex = 8;
			this->VelarImplosive->Text = L"ɠ";
			this->VelarImplosive->UseVisualStyleBackColor = true;
			this->VelarImplosive->Visible = false;
			this->VelarImplosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// UvularImplosive
			// 
			this->UvularImplosive->Location = System::Drawing::Point(480, 519);
			this->UvularImplosive->Name = L"UvularImplosive";
			this->UvularImplosive->Size = System::Drawing::Size(27, 28);
			this->UvularImplosive->TabIndex = 8;
			this->UvularImplosive->Text = L"ʛ";
			this->UvularImplosive->UseVisualStyleBackColor = true;
			this->UvularImplosive->Visible = false;
			this->UvularImplosive->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// Ejective
			// 
			this->Ejective->Location = System::Drawing::Point(642, 375);
			this->Ejective->Name = L"Ejective";
			this->Ejective->Size = System::Drawing::Size(27, 28);
			this->Ejective->TabIndex = 8;
			this->Ejective->Text = L"ʼ";
			this->Ejective->UseVisualStyleBackColor = true;
			this->Ejective->Visible = false;
			this->Ejective->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// AlveolarLateralClick
			// 
			this->AlveolarLateralClick->Location = System::Drawing::Point(320, 521);
			this->AlveolarLateralClick->Name = L"AlveolarLateralClick";
			this->AlveolarLateralClick->Size = System::Drawing::Size(27, 28);
			this->AlveolarLateralClick->TabIndex = 8;
			this->AlveolarLateralClick->Text = L"ǁ";
			this->AlveolarLateralClick->UseVisualStyleBackColor = true;
			this->AlveolarLateralClick->Visible = false;
			this->AlveolarLateralClick->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// ConsonantsOPic
			// 
			this->ConsonantsOPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConsonantsOPic.Image")));
			this->ConsonantsOPic->Location = System::Drawing::Point(253, 351);
			this->ConsonantsOPic->Name = L"ConsonantsOPic";
			this->ConsonantsOPic->Size = System::Drawing::Size(617, 206);
			this->ConsonantsOPic->TabIndex = 9;
			this->ConsonantsOPic->TabStop = false;
			this->ConsonantsOPic->Visible = false;
			// 
			// VoicelessLabialVelarFricative
			// 
			this->VoicelessLabialVelarFricative->Location = System::Drawing::Point(253, 351);
			this->VoicelessLabialVelarFricative->Name = L"VoicelessLabialVelarFricative";
			this->VoicelessLabialVelarFricative->Size = System::Drawing::Size(26, 21);
			this->VoicelessLabialVelarFricative->TabIndex = 10;
			this->VoicelessLabialVelarFricative->Text = L"ʍ";
			this->VoicelessLabialVelarFricative->UseVisualStyleBackColor = true;
			this->VoicelessLabialVelarFricative->Visible = false;
			// 
			// VoicedLabialVelarApproximant
			// 
			this->VoicedLabialVelarApproximant->Location = System::Drawing::Point(253, 388);
			this->VoicedLabialVelarApproximant->Name = L"VoicedLabialVelarApproximant";
			this->VoicedLabialVelarApproximant->Size = System::Drawing::Size(26, 21);
			this->VoicedLabialVelarApproximant->TabIndex = 10;
			this->VoicedLabialVelarApproximant->Text = L"w";
			this->VoicedLabialVelarApproximant->UseVisualStyleBackColor = true;
			this->VoicedLabialVelarApproximant->Visible = false;
			// 
			// VoicedLabialPalatalApproximant
			// 
			this->VoicedLabialPalatalApproximant->Location = System::Drawing::Point(257, 424);
			this->VoicedLabialPalatalApproximant->Name = L"VoicedLabialPalatalApproximant";
			this->VoicedLabialPalatalApproximant->Size = System::Drawing::Size(22, 21);
			this->VoicedLabialPalatalApproximant->TabIndex = 10;
			this->VoicedLabialPalatalApproximant->Text = L"ɥ";
			this->VoicedLabialPalatalApproximant->UseVisualStyleBackColor = true;
			this->VoicedLabialPalatalApproximant->Visible = false;
			this->VoicedLabialPalatalApproximant->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicelessEpiglottalFricative
			// 
			this->VoicelessEpiglottalFricative->Location = System::Drawing::Point(257, 451);
			this->VoicelessEpiglottalFricative->Name = L"VoicelessEpiglottalFricative";
			this->VoicelessEpiglottalFricative->Size = System::Drawing::Size(22, 21);
			this->VoicelessEpiglottalFricative->TabIndex = 10;
			this->VoicelessEpiglottalFricative->Text = L"ʜ";
			this->VoicelessEpiglottalFricative->UseVisualStyleBackColor = true;
			this->VoicelessEpiglottalFricative->Visible = false;
			// 
			// VoicedEpiglottalFricative
			// 
			this->VoicedEpiglottalFricative->Location = System::Drawing::Point(257, 478);
			this->VoicedEpiglottalFricative->Name = L"VoicedEpiglottalFricative";
			this->VoicedEpiglottalFricative->Size = System::Drawing::Size(22, 31);
			this->VoicedEpiglottalFricative->TabIndex = 10;
			this->VoicedEpiglottalFricative->Text = L"ʢ";
			this->VoicedEpiglottalFricative->UseVisualStyleBackColor = true;
			this->VoicedEpiglottalFricative->Visible = false;
			// 
			// EpiglottalPlosive
			// 
			this->EpiglottalPlosive->Location = System::Drawing::Point(257, 515);
			this->EpiglottalPlosive->Name = L"EpiglottalPlosive";
			this->EpiglottalPlosive->Size = System::Drawing::Size(22, 31);
			this->EpiglottalPlosive->TabIndex = 10;
			this->EpiglottalPlosive->Text = L"ʡ";
			this->EpiglottalPlosive->UseVisualStyleBackColor = true;
			this->EpiglottalPlosive->Visible = false;
			// 
			// UnvoicedAlveoloPalatalFricative
			// 
			this->UnvoicedAlveoloPalatalFricative->Location = System::Drawing::Point(502, 351);
			this->UnvoicedAlveoloPalatalFricative->Name = L"UnvoicedAlveoloPalatalFricative";
			this->UnvoicedAlveoloPalatalFricative->Size = System::Drawing::Size(22, 26);
			this->UnvoicedAlveoloPalatalFricative->TabIndex = 10;
			this->UnvoicedAlveoloPalatalFricative->Text = L"ɕ";
			this->UnvoicedAlveoloPalatalFricative->UseVisualStyleBackColor = true;
			this->UnvoicedAlveoloPalatalFricative->Visible = false;
			// 
			// VoicedAlveoloPalatalFricative
			// 
			this->VoicedAlveoloPalatalFricative->Location = System::Drawing::Point(525, 351);
			this->VoicedAlveoloPalatalFricative->Name = L"VoicedAlveoloPalatalFricative";
			this->VoicedAlveoloPalatalFricative->Size = System::Drawing::Size(26, 25);
			this->VoicedAlveoloPalatalFricative->TabIndex = 10;
			this->VoicedAlveoloPalatalFricative->Text = L"ʑ";
			this->VoicedAlveoloPalatalFricative->UseVisualStyleBackColor = true;
			this->VoicedAlveoloPalatalFricative->Visible = false;
			// 
			// UnvoicedPostalveoloVelarFricative
			// 
			this->UnvoicedPostalveoloVelarFricative->Location = System::Drawing::Point(502, 414);
			this->UnvoicedPostalveoloVelarFricative->Name = L"UnvoicedPostalveoloVelarFricative";
			this->UnvoicedPostalveoloVelarFricative->Size = System::Drawing::Size(22, 31);
			this->UnvoicedPostalveoloVelarFricative->TabIndex = 10;
			this->UnvoicedPostalveoloVelarFricative->Text = L"ɧ";
			this->UnvoicedPostalveoloVelarFricative->UseVisualStyleBackColor = true;
			this->UnvoicedPostalveoloVelarFricative->Visible = false;
			this->UnvoicedPostalveoloVelarFricative->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VoicedAlveolarLateralFlap
			// 
			this->VoicedAlveolarLateralFlap->Location = System::Drawing::Point(525, 378);
			this->VoicedAlveolarLateralFlap->Name = L"VoicedAlveolarLateralFlap";
			this->VoicedAlveolarLateralFlap->Size = System::Drawing::Size(22, 31);
			this->VoicedAlveolarLateralFlap->TabIndex = 10;
			this->VoicedAlveolarLateralFlap->Text = L"ɺ";
			this->VoicedAlveolarLateralFlap->UseVisualStyleBackColor = true;
			this->VoicedAlveolarLateralFlap->Visible = false;
			this->VoicedAlveolarLateralFlap->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// LinkAbove
			// 
			this->LinkAbove->Location = System::Drawing::Point(794, 477);
			this->LinkAbove->Name = L"LinkAbove";
			this->LinkAbove->Size = System::Drawing::Size(42, 38);
			this->LinkAbove->TabIndex = 10;
			this->LinkAbove->Text = L" ͡   ";
			this->LinkAbove->UseVisualStyleBackColor = true;
			this->LinkAbove->Visible = false;
			this->LinkAbove->Click += gcnew System::EventHandler(this, &MyForm::LinkAbove_Click);
			// 
			// LinkBelow
			// 
			this->LinkBelow->Location = System::Drawing::Point(746, 478);
			this->LinkBelow->Name = L"LinkBelow";
			this->LinkBelow->Size = System::Drawing::Size(41, 38);
			this->LinkBelow->TabIndex = 10;
			this->LinkBelow->Text = L" ͜ ";
			this->LinkBelow->UseVisualStyleBackColor = true;
			this->LinkBelow->Visible = false;
			this->LinkBelow->Click += gcnew System::EventHandler(this, &MyForm::LinkBelow_Click);
			// 
			// VowelsPic
			// 
			this->VowelsPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"VowelsPic.Image")));
			this->VowelsPic->Location = System::Drawing::Point(320, 257);
			this->VowelsPic->Name = L"VowelsPic";
			this->VowelsPic->Size = System::Drawing::Size(492, 300);
			this->VowelsPic->TabIndex = 11;
			this->VowelsPic->TabStop = false;
			this->VowelsPic->Visible = false;
			// 
			// CloseFrontUnrounded
			// 
			this->CloseFrontUnrounded->Location = System::Drawing::Point(403, 286);
			this->CloseFrontUnrounded->Name = L"CloseFrontUnrounded";
			this->CloseFrontUnrounded->Size = System::Drawing::Size(27, 30);
			this->CloseFrontUnrounded->TabIndex = 12;
			this->CloseFrontUnrounded->Text = L"i";
			this->CloseFrontUnrounded->UseVisualStyleBackColor = true;
			this->CloseFrontUnrounded->Visible = false;
			this->CloseFrontUnrounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// CloseFrontRounded
			// 
			this->CloseFrontRounded->Location = System::Drawing::Point(445, 286);
			this->CloseFrontRounded->Name = L"CloseFrontRounded";
			this->CloseFrontRounded->Size = System::Drawing::Size(27, 30);
			this->CloseFrontRounded->TabIndex = 12;
			this->CloseFrontRounded->Text = L"y";
			this->CloseFrontRounded->UseVisualStyleBackColor = true;
			this->CloseFrontRounded->Visible = false;
			this->CloseFrontRounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// CloseMidFrontUnrounded
			// 
			this->CloseMidFrontUnrounded->Location = System::Drawing::Point(454, 361);
			this->CloseMidFrontUnrounded->Name = L"CloseMidFrontUnrounded";
			this->CloseMidFrontUnrounded->Size = System::Drawing::Size(27, 30);
			this->CloseMidFrontUnrounded->TabIndex = 12;
			this->CloseMidFrontUnrounded->Text = L"e";
			this->CloseMidFrontUnrounded->UseVisualStyleBackColor = true;
			this->CloseMidFrontUnrounded->Visible = false;
			this->CloseMidFrontUnrounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// NearCloseNearFrontUnrounded
			// 
			this->NearCloseNearFrontUnrounded->Location = System::Drawing::Point(475, 322);
			this->NearCloseNearFrontUnrounded->Name = L"NearCloseNearFrontUnrounded";
			this->NearCloseNearFrontUnrounded->Size = System::Drawing::Size(27, 30);
			this->NearCloseNearFrontUnrounded->TabIndex = 12;
			this->NearCloseNearFrontUnrounded->Text = L"ɪ";
			this->NearCloseNearFrontUnrounded->UseVisualStyleBackColor = true;
			this->NearCloseNearFrontUnrounded->Visible = false;
			this->NearCloseNearFrontUnrounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// NearCloseNearFrontRounded
			// 
			this->NearCloseNearFrontRounded->Location = System::Drawing::Point(502, 322);
			this->NearCloseNearFrontRounded->Name = L"NearCloseNearFrontRounded";
			this->NearCloseNearFrontRounded->Size = System::Drawing::Size(27, 30);
			this->NearCloseNearFrontRounded->TabIndex = 12;
			this->NearCloseNearFrontRounded->Text = L"ʏ";
			this->NearCloseNearFrontRounded->UseVisualStyleBackColor = true;
			this->NearCloseNearFrontRounded->Visible = false;
			this->NearCloseNearFrontRounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// CloseCentralUnrounded
			// 
			this->CloseCentralUnrounded->Location = System::Drawing::Point(560, 286);
			this->CloseCentralUnrounded->Name = L"CloseCentralUnrounded";
			this->CloseCentralUnrounded->Size = System::Drawing::Size(27, 30);
			this->CloseCentralUnrounded->TabIndex = 12;
			this->CloseCentralUnrounded->Text = L"ɨ";
			this->CloseCentralUnrounded->UseVisualStyleBackColor = true;
			this->CloseCentralUnrounded->Visible = false;
			this->CloseCentralUnrounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// CloseCentralRounded
			// 
			this->CloseCentralRounded->Location = System::Drawing::Point(593, 286);
			this->CloseCentralRounded->Name = L"CloseCentralRounded";
			this->CloseCentralRounded->Size = System::Drawing::Size(27, 30);
			this->CloseCentralRounded->TabIndex = 12;
			this->CloseCentralRounded->Text = L"ʉ";
			this->CloseCentralRounded->UseVisualStyleBackColor = true;
			this->CloseCentralRounded->Visible = false;
			this->CloseCentralRounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// CloseBackUnrounded
			// 
			this->CloseBackUnrounded->Location = System::Drawing::Point(705, 286);
			this->CloseBackUnrounded->Name = L"CloseBackUnrounded";
			this->CloseBackUnrounded->Size = System::Drawing::Size(27, 30);
			this->CloseBackUnrounded->TabIndex = 12;
			this->CloseBackUnrounded->Text = L"ɯ";
			this->CloseBackUnrounded->UseVisualStyleBackColor = true;
			this->CloseBackUnrounded->Visible = false;
			this->CloseBackUnrounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// CloseBackRounded
			// 
			this->CloseBackRounded->Location = System::Drawing::Point(746, 286);
			this->CloseBackRounded->Name = L"CloseBackRounded";
			this->CloseBackRounded->Size = System::Drawing::Size(27, 30);
			this->CloseBackRounded->TabIndex = 12;
			this->CloseBackRounded->Text = L"u";
			this->CloseBackRounded->UseVisualStyleBackColor = true;
			this->CloseBackRounded->Visible = false;
			this->CloseBackRounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// CloseMidBackRounded
			// 
			this->CloseMidBackRounded->Location = System::Drawing::Point(746, 361);
			this->CloseMidBackRounded->Name = L"CloseMidBackRounded";
			this->CloseMidBackRounded->Size = System::Drawing::Size(27, 30);
			this->CloseMidBackRounded->TabIndex = 12;
			this->CloseMidBackRounded->Text = L"o";
			this->CloseMidBackRounded->UseVisualStyleBackColor = true;
			this->CloseMidBackRounded->Visible = false;
			this->CloseMidBackRounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// CloseMidBackUnrounded
			// 
			this->CloseMidBackUnrounded->Location = System::Drawing::Point(705, 361);
			this->CloseMidBackUnrounded->Name = L"CloseMidBackUnrounded";
			this->CloseMidBackUnrounded->Size = System::Drawing::Size(27, 30);
			this->CloseMidBackUnrounded->TabIndex = 12;
			this->CloseMidBackUnrounded->Text = L"ɤ";
			this->CloseMidBackUnrounded->UseVisualStyleBackColor = true;
			this->CloseMidBackUnrounded->Visible = false;
			this->CloseMidBackUnrounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// NearCloseNearBackRounded
			// 
			this->NearCloseNearBackRounded->Location = System::Drawing::Point(674, 322);
			this->NearCloseNearBackRounded->Name = L"NearCloseNearBackRounded";
			this->NearCloseNearBackRounded->Size = System::Drawing::Size(27, 30);
			this->NearCloseNearBackRounded->TabIndex = 12;
			this->NearCloseNearBackRounded->Text = L"ʊ";
			this->NearCloseNearBackRounded->UseVisualStyleBackColor = true;
			this->NearCloseNearBackRounded->Visible = false;
			this->NearCloseNearBackRounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// CloseMidCentralRounded
			// 
			this->CloseMidCentralRounded->Location = System::Drawing::Point(616, 361);
			this->CloseMidCentralRounded->Name = L"CloseMidCentralRounded";
			this->CloseMidCentralRounded->Size = System::Drawing::Size(27, 30);
			this->CloseMidCentralRounded->TabIndex = 12;
			this->CloseMidCentralRounded->Text = L"ɵ";
			this->CloseMidCentralRounded->UseVisualStyleBackColor = true;
			this->CloseMidCentralRounded->Visible = false;
			this->CloseMidCentralRounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// CloseMidCentralUnrounded
			// 
			this->CloseMidCentralUnrounded->Location = System::Drawing::Point(583, 361);
			this->CloseMidCentralUnrounded->Name = L"CloseMidCentralUnrounded";
			this->CloseMidCentralUnrounded->Size = System::Drawing::Size(27, 30);
			this->CloseMidCentralUnrounded->TabIndex = 12;
			this->CloseMidCentralUnrounded->Text = L"ɘ";
			this->CloseMidCentralUnrounded->UseVisualStyleBackColor = true;
			this->CloseMidCentralUnrounded->Visible = false;
			this->CloseMidCentralUnrounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// CloseMidFrontRounded
			// 
			this->CloseMidFrontRounded->Location = System::Drawing::Point(495, 361);
			this->CloseMidFrontRounded->Name = L"CloseMidFrontRounded";
			this->CloseMidFrontRounded->Size = System::Drawing::Size(27, 30);
			this->CloseMidFrontRounded->TabIndex = 12;
			this->CloseMidFrontRounded->Text = L"ø";
			this->CloseMidFrontRounded->UseVisualStyleBackColor = true;
			this->CloseMidFrontRounded->Visible = false;
			this->CloseMidFrontRounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// OpenMidFrontUnrounded
			// 
			this->OpenMidFrontUnrounded->Location = System::Drawing::Point(502, 440);
			this->OpenMidFrontUnrounded->Name = L"OpenMidFrontUnrounded";
			this->OpenMidFrontUnrounded->Size = System::Drawing::Size(27, 30);
			this->OpenMidFrontUnrounded->TabIndex = 12;
			this->OpenMidFrontUnrounded->Text = L"ɛ";
			this->OpenMidFrontUnrounded->UseVisualStyleBackColor = true;
			this->OpenMidFrontUnrounded->Visible = false;
			this->OpenMidFrontUnrounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// OpenMidFrontRounded
			// 
			this->OpenMidFrontRounded->Location = System::Drawing::Point(546, 440);
			this->OpenMidFrontRounded->Name = L"OpenMidFrontRounded";
			this->OpenMidFrontRounded->Size = System::Drawing::Size(27, 30);
			this->OpenMidFrontRounded->TabIndex = 12;
			this->OpenMidFrontRounded->Text = L"œ";
			this->OpenMidFrontRounded->UseVisualStyleBackColor = true;
			this->OpenMidFrontRounded->Visible = false;
			this->OpenMidFrontRounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// OpenMidCentralUnrounded
			// 
			this->OpenMidCentralUnrounded->Location = System::Drawing::Point(605, 440);
			this->OpenMidCentralUnrounded->Name = L"OpenMidCentralUnrounded";
			this->OpenMidCentralUnrounded->Size = System::Drawing::Size(27, 30);
			this->OpenMidCentralUnrounded->TabIndex = 12;
			this->OpenMidCentralUnrounded->Text = L"ɜ";
			this->OpenMidCentralUnrounded->UseVisualStyleBackColor = true;
			this->OpenMidCentralUnrounded->Visible = false;
			this->OpenMidCentralUnrounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// OpenMidCentralRounded
			// 
			this->OpenMidCentralRounded->Location = System::Drawing::Point(642, 440);
			this->OpenMidCentralRounded->Name = L"OpenMidCentralRounded";
			this->OpenMidCentralRounded->Size = System::Drawing::Size(27, 30);
			this->OpenMidCentralRounded->TabIndex = 12;
			this->OpenMidCentralRounded->Text = L"ɞ";
			this->OpenMidCentralRounded->UseVisualStyleBackColor = true;
			this->OpenMidCentralRounded->Visible = false;
			this->OpenMidCentralRounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// OpenMidBackUnrounded
			// 
			this->OpenMidBackUnrounded->Location = System::Drawing::Point(705, 440);
			this->OpenMidBackUnrounded->Name = L"OpenMidBackUnrounded";
			this->OpenMidBackUnrounded->Size = System::Drawing::Size(27, 30);
			this->OpenMidBackUnrounded->TabIndex = 12;
			this->OpenMidBackUnrounded->Text = L"ʌ";
			this->OpenMidBackUnrounded->UseVisualStyleBackColor = true;
			this->OpenMidBackUnrounded->Visible = false;
			this->OpenMidBackUnrounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// OpenMidBackRounded
			// 
			this->OpenMidBackRounded->Location = System::Drawing::Point(746, 440);
			this->OpenMidBackRounded->Name = L"OpenMidBackRounded";
			this->OpenMidBackRounded->Size = System::Drawing::Size(27, 30);
			this->OpenMidBackRounded->TabIndex = 12;
			this->OpenMidBackRounded->Text = L"ɔ";
			this->OpenMidBackRounded->UseVisualStyleBackColor = true;
			this->OpenMidBackRounded->Visible = false;
			this->OpenMidBackRounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// OpenBackRounded
			// 
			this->OpenBackRounded->Location = System::Drawing::Point(746, 517);
			this->OpenBackRounded->Name = L"OpenBackRounded";
			this->OpenBackRounded->Size = System::Drawing::Size(27, 30);
			this->OpenBackRounded->TabIndex = 12;
			this->OpenBackRounded->Text = L"ɒ";
			this->OpenBackRounded->UseVisualStyleBackColor = true;
			this->OpenBackRounded->Visible = false;
			this->OpenBackRounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// OpenBackUnrounded
			// 
			this->OpenBackUnrounded->Location = System::Drawing::Point(705, 517);
			this->OpenBackUnrounded->Name = L"OpenBackUnrounded";
			this->OpenBackUnrounded->Size = System::Drawing::Size(27, 30);
			this->OpenBackUnrounded->TabIndex = 12;
			this->OpenBackUnrounded->Text = L"ɑ";
			this->OpenBackUnrounded->UseVisualStyleBackColor = true;
			this->OpenBackUnrounded->Visible = false;
			this->OpenBackUnrounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// OpenFrontRounded
			// 
			this->OpenFrontRounded->Location = System::Drawing::Point(599, 516);
			this->OpenFrontRounded->Name = L"OpenFrontRounded";
			this->OpenFrontRounded->Size = System::Drawing::Size(27, 30);
			this->OpenFrontRounded->TabIndex = 12;
			this->OpenFrontRounded->Text = L"ɶ";
			this->OpenFrontRounded->UseVisualStyleBackColor = true;
			this->OpenFrontRounded->Visible = false;
			this->OpenFrontRounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// OpenFrontUnrounded
			// 
			this->OpenFrontUnrounded->Location = System::Drawing::Point(560, 516);
			this->OpenFrontUnrounded->Name = L"OpenFrontUnrounded";
			this->OpenFrontUnrounded->Size = System::Drawing::Size(27, 30);
			this->OpenFrontUnrounded->TabIndex = 12;
			this->OpenFrontUnrounded->Text = L"a";
			this->OpenFrontUnrounded->UseVisualStyleBackColor = true;
			this->OpenFrontUnrounded->Visible = false;
			this->OpenFrontUnrounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// NearOpenFrontUnrounded
			// 
			this->NearOpenFrontUnrounded->Location = System::Drawing::Point(531, 485);
			this->NearOpenFrontUnrounded->Name = L"NearOpenFrontUnrounded";
			this->NearOpenFrontUnrounded->Size = System::Drawing::Size(27, 30);
			this->NearOpenFrontUnrounded->TabIndex = 12;
			this->NearOpenFrontUnrounded->Text = L"æ";
			this->NearOpenFrontUnrounded->UseVisualStyleBackColor = true;
			this->NearOpenFrontUnrounded->Visible = false;
			this->NearOpenFrontUnrounded->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// NearOpenCentral
			// 
			this->NearOpenCentral->Location = System::Drawing::Point(639, 479);
			this->NearOpenCentral->Name = L"NearOpenCentral";
			this->NearOpenCentral->Size = System::Drawing::Size(27, 30);
			this->NearOpenCentral->TabIndex = 12;
			this->NearOpenCentral->Text = L"ɐ";
			this->NearOpenCentral->UseVisualStyleBackColor = true;
			this->NearOpenCentral->Visible = false;
			this->NearOpenCentral->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// MidCentral
			// 
			this->MidCentral->Location = System::Drawing::Point(616, 404);
			this->MidCentral->Name = L"MidCentral";
			this->MidCentral->Size = System::Drawing::Size(27, 30);
			this->MidCentral->TabIndex = 12;
			this->MidCentral->Text = L"ə";
			this->MidCentral->UseVisualStyleBackColor = true;
			this->MidCentral->Visible = false;
			this->MidCentral->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// DiacriticsPic
			// 
			this->DiacriticsPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DiacriticsPic.Image")));
			this->DiacriticsPic->Location = System::Drawing::Point(204, 107);
			this->DiacriticsPic->Name = L"DiacriticsPic";
			this->DiacriticsPic->Size = System::Drawing::Size(684, 450);
			this->DiacriticsPic->TabIndex = 13;
			this->DiacriticsPic->TabStop = false;
			this->DiacriticsPic->Visible = false;
			// 
			// Voiceless
			// 
			this->Voiceless->Location = System::Drawing::Point(214, 121);
			this->Voiceless->Name = L"Voiceless";
			this->Voiceless->Size = System::Drawing::Size(24, 29);
			this->Voiceless->TabIndex = 14;
			this->Voiceless->Text = L" ̥";
			this->Voiceless->UseVisualStyleBackColor = true;
			this->Voiceless->Visible = false;
			this->Voiceless->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Voiced
			// 
			this->Voiced->Location = System::Drawing::Point(214, 156);
			this->Voiced->Name = L"Voiced";
			this->Voiced->Size = System::Drawing::Size(24, 29);
			this->Voiced->TabIndex = 14;
			this->Voiced->Text = L" ̬";
			this->Voiced->UseVisualStyleBackColor = true;
			this->Voiced->Visible = false;
			this->Voiced->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Aspirated
			// 
			this->Aspirated->Location = System::Drawing::Point(214, 191);
			this->Aspirated->Name = L"Aspirated";
			this->Aspirated->Size = System::Drawing::Size(24, 29);
			this->Aspirated->TabIndex = 14;
			this->Aspirated->Text = L"ʰ";
			this->Aspirated->UseVisualStyleBackColor = true;
			this->Aspirated->Visible = false;
			this->Aspirated->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// MoreRounded
			// 
			this->MoreRounded->Location = System::Drawing::Point(214, 231);
			this->MoreRounded->Name = L"MoreRounded";
			this->MoreRounded->Size = System::Drawing::Size(24, 29);
			this->MoreRounded->TabIndex = 14;
			this->MoreRounded->Text = L" ̹";
			this->MoreRounded->UseVisualStyleBackColor = true;
			this->MoreRounded->Visible = false;
			this->MoreRounded->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// LessRounded
			// 
			this->LessRounded->Location = System::Drawing::Point(214, 267);
			this->LessRounded->Name = L"LessRounded";
			this->LessRounded->Size = System::Drawing::Size(24, 29);
			this->LessRounded->TabIndex = 14;
			this->LessRounded->Text = L" ̜";
			this->LessRounded->UseVisualStyleBackColor = true;
			this->LessRounded->Visible = false;
			this->LessRounded->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Advanced
			// 
			this->Advanced->Location = System::Drawing::Point(214, 302);
			this->Advanced->Name = L"Advanced";
			this->Advanced->Size = System::Drawing::Size(24, 29);
			this->Advanced->TabIndex = 14;
			this->Advanced->Text = L" ̟";
			this->Advanced->UseVisualStyleBackColor = true;
			this->Advanced->Visible = false;
			this->Advanced->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Retracted
			// 
			this->Retracted->Location = System::Drawing::Point(214, 337);
			this->Retracted->Name = L"Retracted";
			this->Retracted->Size = System::Drawing::Size(24, 29);
			this->Retracted->TabIndex = 14;
			this->Retracted->Text = L" ̱";
			this->Retracted->UseVisualStyleBackColor = true;
			this->Retracted->Visible = false;
			this->Retracted->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Centralized
			// 
			this->Centralized->Location = System::Drawing::Point(214, 372);
			this->Centralized->Name = L"Centralized";
			this->Centralized->Size = System::Drawing::Size(24, 29);
			this->Centralized->TabIndex = 14;
			this->Centralized->Text = L" ̈";
			this->Centralized->UseVisualStyleBackColor = true;
			this->Centralized->Visible = false;
			this->Centralized->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MidCentralised
			// 
			this->MidCentralised->Location = System::Drawing::Point(215, 412);
			this->MidCentralised->Name = L"MidCentralised";
			this->MidCentralised->Size = System::Drawing::Size(24, 29);
			this->MidCentralised->TabIndex = 14;
			this->MidCentralised->Text = L" ̽";
			this->MidCentralised->UseVisualStyleBackColor = true;
			this->MidCentralised->Visible = false;
			this->MidCentralised->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Syllabic
			// 
			this->Syllabic->Location = System::Drawing::Point(215, 451);
			this->Syllabic->Name = L"Syllabic";
			this->Syllabic->Size = System::Drawing::Size(24, 29);
			this->Syllabic->TabIndex = 14;
			this->Syllabic->Text = L" ̩";
			this->Syllabic->UseVisualStyleBackColor = true;
			this->Syllabic->Visible = false;
			this->Syllabic->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// NonSyllabic
			// 
			this->NonSyllabic->Location = System::Drawing::Point(214, 486);
			this->NonSyllabic->Name = L"NonSyllabic";
			this->NonSyllabic->Size = System::Drawing::Size(24, 29);
			this->NonSyllabic->TabIndex = 14;
			this->NonSyllabic->Text = L" ̯";
			this->NonSyllabic->UseVisualStyleBackColor = true;
			this->NonSyllabic->Visible = false;
			this->NonSyllabic->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Rhoticity
			// 
			this->Rhoticity->Location = System::Drawing::Point(215, 521);
			this->Rhoticity->Name = L"Rhoticity";
			this->Rhoticity->Size = System::Drawing::Size(24, 29);
			this->Rhoticity->TabIndex = 14;
			this->Rhoticity->Text = L" ˞";
			this->Rhoticity->UseVisualStyleBackColor = true;
			this->Rhoticity->Visible = false;
			this->Rhoticity->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// BreathyVoiced
			// 
			this->BreathyVoiced->Location = System::Drawing::Point(432, 121);
			this->BreathyVoiced->Name = L"BreathyVoiced";
			this->BreathyVoiced->Size = System::Drawing::Size(24, 29);
			this->BreathyVoiced->TabIndex = 14;
			this->BreathyVoiced->Text = L" ̤";
			this->BreathyVoiced->UseVisualStyleBackColor = true;
			this->BreathyVoiced->Visible = false;
			this->BreathyVoiced->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// CreakyVoiced
			// 
			this->CreakyVoiced->Location = System::Drawing::Point(432, 156);
			this->CreakyVoiced->Name = L"CreakyVoiced";
			this->CreakyVoiced->Size = System::Drawing::Size(24, 29);
			this->CreakyVoiced->TabIndex = 14;
			this->CreakyVoiced->Text = L" ̰";
			this->CreakyVoiced->UseVisualStyleBackColor = true;
			this->CreakyVoiced->Visible = false;
			this->CreakyVoiced->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Linguolabial
			// 
			this->Linguolabial->Location = System::Drawing::Point(432, 194);
			this->Linguolabial->Name = L"Linguolabial";
			this->Linguolabial->Size = System::Drawing::Size(24, 29);
			this->Linguolabial->TabIndex = 14;
			this->Linguolabial->Text = L" ̼";
			this->Linguolabial->UseVisualStyleBackColor = true;
			this->Linguolabial->Visible = false;
			this->Linguolabial->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Labialized
			// 
			this->Labialized->Location = System::Drawing::Point(432, 229);
			this->Labialized->Name = L"Labialized";
			this->Labialized->Size = System::Drawing::Size(24, 29);
			this->Labialized->TabIndex = 14;
			this->Labialized->Text = L"ʷ";
			this->Labialized->UseVisualStyleBackColor = true;
			this->Labialized->Visible = false;
			this->Labialized->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// Palatalized
			// 
			this->Palatalized->Location = System::Drawing::Point(432, 264);
			this->Palatalized->Name = L"Palatalized";
			this->Palatalized->Size = System::Drawing::Size(24, 29);
			this->Palatalized->TabIndex = 14;
			this->Palatalized->Text = L"ʲ";
			this->Palatalized->UseVisualStyleBackColor = true;
			this->Palatalized->Visible = false;
			this->Palatalized->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// Velarized
			// 
			this->Velarized->Location = System::Drawing::Point(432, 302);
			this->Velarized->Name = L"Velarized";
			this->Velarized->Size = System::Drawing::Size(24, 29);
			this->Velarized->TabIndex = 14;
			this->Velarized->Text = L"ˠ";
			this->Velarized->UseVisualStyleBackColor = true;
			this->Velarized->Visible = false;
			this->Velarized->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// Pharyngealized
			// 
			this->Pharyngealized->Location = System::Drawing::Point(432, 337);
			this->Pharyngealized->Name = L"Pharyngealized";
			this->Pharyngealized->Size = System::Drawing::Size(24, 29);
			this->Pharyngealized->TabIndex = 14;
			this->Pharyngealized->Text = L"ˤ";
			this->Pharyngealized->UseVisualStyleBackColor = true;
			this->Pharyngealized->Visible = false;
			this->Pharyngealized->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// VelarizedOrPharyngealized
			// 
			this->VelarizedOrPharyngealized->Location = System::Drawing::Point(432, 372);
			this->VelarizedOrPharyngealized->Name = L"VelarizedOrPharyngealized";
			this->VelarizedOrPharyngealized->Size = System::Drawing::Size(24, 29);
			this->VelarizedOrPharyngealized->TabIndex = 14;
			this->VelarizedOrPharyngealized->Text = L" ̴";
			this->VelarizedOrPharyngealized->UseVisualStyleBackColor = true;
			this->VelarizedOrPharyngealized->Visible = false;
			this->VelarizedOrPharyngealized->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Raised
			// 
			this->Raised->Location = System::Drawing::Point(432, 412);
			this->Raised->Name = L"Raised";
			this->Raised->Size = System::Drawing::Size(24, 29);
			this->Raised->TabIndex = 14;
			this->Raised->Text = L" ̝";
			this->Raised->UseVisualStyleBackColor = true;
			this->Raised->Visible = false;
			this->Raised->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Lowered
			// 
			this->Lowered->Location = System::Drawing::Point(432, 451);
			this->Lowered->Name = L"Lowered";
			this->Lowered->Size = System::Drawing::Size(24, 29);
			this->Lowered->TabIndex = 14;
			this->Lowered->Text = L" ̞";
			this->Lowered->UseVisualStyleBackColor = true;
			this->Lowered->Visible = false;
			this->Lowered->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// AdvancedToungeRoot
			// 
			this->AdvancedToungeRoot->Location = System::Drawing::Point(432, 486);
			this->AdvancedToungeRoot->Name = L"AdvancedToungeRoot";
			this->AdvancedToungeRoot->Size = System::Drawing::Size(24, 29);
			this->AdvancedToungeRoot->TabIndex = 14;
			this->AdvancedToungeRoot->Text = L" ̘";
			this->AdvancedToungeRoot->UseVisualStyleBackColor = true;
			this->AdvancedToungeRoot->Visible = false;
			this->AdvancedToungeRoot->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// RetractedToungeRoot
			// 
			this->RetractedToungeRoot->Location = System::Drawing::Point(432, 523);
			this->RetractedToungeRoot->Name = L"RetractedToungeRoot";
			this->RetractedToungeRoot->Size = System::Drawing::Size(24, 29);
			this->RetractedToungeRoot->TabIndex = 14;
			this->RetractedToungeRoot->Text = L" ̙";
			this->RetractedToungeRoot->UseVisualStyleBackColor = true;
			this->RetractedToungeRoot->Visible = false;
			this->RetractedToungeRoot->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Dental
			// 
			this->Dental->Location = System::Drawing::Point(661, 122);
			this->Dental->Name = L"Dental";
			this->Dental->Size = System::Drawing::Size(24, 29);
			this->Dental->TabIndex = 14;
			this->Dental->Text = L" ̪";
			this->Dental->UseVisualStyleBackColor = true;
			this->Dental->Visible = false;
			this->Dental->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Apical
			// 
			this->Apical->Location = System::Drawing::Point(661, 157);
			this->Apical->Name = L"Apical";
			this->Apical->Size = System::Drawing::Size(24, 29);
			this->Apical->TabIndex = 14;
			this->Apical->Text = L" ̺";
			this->Apical->UseVisualStyleBackColor = true;
			this->Apical->Visible = false;
			this->Apical->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Laminal
			// 
			this->Laminal->Location = System::Drawing::Point(661, 194);
			this->Laminal->Name = L"Laminal";
			this->Laminal->Size = System::Drawing::Size(24, 29);
			this->Laminal->TabIndex = 14;
			this->Laminal->Text = L" ̻";
			this->Laminal->UseVisualStyleBackColor = true;
			this->Laminal->Visible = false;
			this->Laminal->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Nasalized
			// 
			this->Nasalized->Location = System::Drawing::Point(661, 229);
			this->Nasalized->Name = L"Nasalized";
			this->Nasalized->Size = System::Drawing::Size(24, 29);
			this->Nasalized->TabIndex = 14;
			this->Nasalized->Text = L" ̃";
			this->Nasalized->UseVisualStyleBackColor = true;
			this->Nasalized->Visible = false;
			this->Nasalized->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// NasalRelease
			// 
			this->NasalRelease->Location = System::Drawing::Point(661, 267);
			this->NasalRelease->Name = L"NasalRelease";
			this->NasalRelease->Size = System::Drawing::Size(24, 29);
			this->NasalRelease->TabIndex = 14;
			this->NasalRelease->Text = L"ⁿ";
			this->NasalRelease->UseVisualStyleBackColor = true;
			this->NasalRelease->Visible = false;
			this->NasalRelease->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// LateralRelease
			// 
			this->LateralRelease->Location = System::Drawing::Point(661, 300);
			this->LateralRelease->Name = L"LateralRelease";
			this->LateralRelease->Size = System::Drawing::Size(24, 29);
			this->LateralRelease->TabIndex = 14;
			this->LateralRelease->Text = L"ˡ";
			this->LateralRelease->UseVisualStyleBackColor = true;
			this->LateralRelease->Visible = false;
			this->LateralRelease->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// NoAudibleRelease
			// 
			this->NoAudibleRelease->Location = System::Drawing::Point(661, 337);
			this->NoAudibleRelease->Name = L"NoAudibleRelease";
			this->NoAudibleRelease->Size = System::Drawing::Size(24, 29);
			this->NoAudibleRelease->TabIndex = 14;
			this->NoAudibleRelease->Text = L" ̚";
			this->NoAudibleRelease->UseVisualStyleBackColor = true;
			this->NoAudibleRelease->Visible = false;
			this->NoAudibleRelease->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// SuprasegmantalsPic
			// 
			this->SuprasegmantalsPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SuprasegmantalsPic.Image")));
			this->SuprasegmantalsPic->Location = System::Drawing::Point(266, 135);
			this->SuprasegmantalsPic->Name = L"SuprasegmantalsPic";
			this->SuprasegmantalsPic->Size = System::Drawing::Size(372, 402);
			this->SuprasegmantalsPic->TabIndex = 15;
			this->SuprasegmantalsPic->TabStop = false;
			this->SuprasegmantalsPic->Visible = false;
			// 
			// TonesAndWordAccentsPic
			// 
			this->TonesAndWordAccentsPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TonesAndWordAccentsPic.Image")));
			this->TonesAndWordAccentsPic->Location = System::Drawing::Point(672, 135);
			this->TonesAndWordAccentsPic->Name = L"TonesAndWordAccentsPic";
			this->TonesAndWordAccentsPic->Size = System::Drawing::Size(342, 335);
			this->TonesAndWordAccentsPic->TabIndex = 15;
			this->TonesAndWordAccentsPic->TabStop = false;
			this->TonesAndWordAccentsPic->Visible = false;
			// 
			// PrimaryStress
			// 
			this->PrimaryStress->Location = System::Drawing::Point(290, 179);
			this->PrimaryStress->Name = L"PrimaryStress";
			this->PrimaryStress->Size = System::Drawing::Size(21, 26);
			this->PrimaryStress->TabIndex = 16;
			this->PrimaryStress->Text = L"ˈ";
			this->PrimaryStress->UseVisualStyleBackColor = true;
			this->PrimaryStress->Visible = false;
			this->PrimaryStress->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// SecondaryStress
			// 
			this->SecondaryStress->Location = System::Drawing::Point(290, 229);
			this->SecondaryStress->Name = L"SecondaryStress";
			this->SecondaryStress->Size = System::Drawing::Size(21, 26);
			this->SecondaryStress->TabIndex = 16;
			this->SecondaryStress->Text = L"ˌ";
			this->SecondaryStress->UseVisualStyleBackColor = true;
			this->SecondaryStress->Visible = false;
			this->SecondaryStress->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// Long
			// 
			this->Long->Location = System::Drawing::Point(290, 261);
			this->Long->Name = L"Long";
			this->Long->Size = System::Drawing::Size(21, 26);
			this->Long->TabIndex = 16;
			this->Long->Text = L"ː";
			this->Long->UseVisualStyleBackColor = true;
			this->Long->Visible = false;
			this->Long->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// HalfLong
			// 
			this->HalfLong->Location = System::Drawing::Point(290, 293);
			this->HalfLong->Name = L"HalfLong";
			this->HalfLong->Size = System::Drawing::Size(21, 26);
			this->HalfLong->TabIndex = 16;
			this->HalfLong->Text = L"ˑ";
			this->HalfLong->UseVisualStyleBackColor = true;
			this->HalfLong->Visible = false;
			this->HalfLong->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// ExtraShort
			// 
			this->ExtraShort->Location = System::Drawing::Point(290, 327);
			this->ExtraShort->Name = L"ExtraShort";
			this->ExtraShort->Size = System::Drawing::Size(21, 26);
			this->ExtraShort->TabIndex = 16;
			this->ExtraShort->Text = L" ̆";
			this->ExtraShort->UseVisualStyleBackColor = true;
			this->ExtraShort->Visible = false;
			this->ExtraShort->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MinorFootGroup
			// 
			this->MinorFootGroup->Location = System::Drawing::Point(290, 364);
			this->MinorFootGroup->Name = L"MinorFootGroup";
			this->MinorFootGroup->Size = System::Drawing::Size(21, 41);
			this->MinorFootGroup->TabIndex = 16;
			this->MinorFootGroup->Text = L"|";
			this->MinorFootGroup->UseVisualStyleBackColor = true;
			this->MinorFootGroup->Visible = false;
			this->MinorFootGroup->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// MajorIntonationGroup
			// 
			this->MajorIntonationGroup->Location = System::Drawing::Point(290, 406);
			this->MajorIntonationGroup->Name = L"MajorIntonationGroup";
			this->MajorIntonationGroup->Size = System::Drawing::Size(21, 41);
			this->MajorIntonationGroup->TabIndex = 16;
			this->MajorIntonationGroup->Text = L"‖";
			this->MajorIntonationGroup->UseVisualStyleBackColor = true;
			this->MajorIntonationGroup->Visible = false;
			this->MajorIntonationGroup->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// SyllableBreak
			// 
			this->SyllableBreak->Location = System::Drawing::Point(290, 453);
			this->SyllableBreak->Name = L"SyllableBreak";
			this->SyllableBreak->Size = System::Drawing::Size(21, 24);
			this->SyllableBreak->TabIndex = 16;
			this->SyllableBreak->Text = L".";
			this->SyllableBreak->UseVisualStyleBackColor = true;
			this->SyllableBreak->Visible = false;
			this->SyllableBreak->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// Linking
			// 
			this->Linking->Location = System::Drawing::Point(290, 495);
			this->Linking->Name = L"Linking";
			this->Linking->Size = System::Drawing::Size(21, 24);
			this->Linking->TabIndex = 16;
			this->Linking->Text = L"‿";
			this->Linking->UseVisualStyleBackColor = true;
			this->Linking->Visible = false;
			this->Linking->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// ExtraHighDiacritic
			// 
			this->ExtraHighDiacritic->Location = System::Drawing::Point(681, 208);
			this->ExtraHighDiacritic->Name = L"ExtraHighDiacritic";
			this->ExtraHighDiacritic->Size = System::Drawing::Size(25, 32);
			this->ExtraHighDiacritic->TabIndex = 16;
			this->ExtraHighDiacritic->Text = L" ̋";
			this->ExtraHighDiacritic->UseVisualStyleBackColor = true;
			this->ExtraHighDiacritic->Visible = false;
			this->ExtraHighDiacritic->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ExtraHigh
			// 
			this->ExtraHigh->Location = System::Drawing::Point(737, 208);
			this->ExtraHigh->Name = L"ExtraHigh";
			this->ExtraHigh->Size = System::Drawing::Size(25, 32);
			this->ExtraHigh->TabIndex = 16;
			this->ExtraHigh->Text = L"˥";
			this->ExtraHigh->UseVisualStyleBackColor = true;
			this->ExtraHigh->Visible = false;
			this->ExtraHigh->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// High
			// 
			this->High->Location = System::Drawing::Point(737, 246);
			this->High->Name = L"High";
			this->High->Size = System::Drawing::Size(25, 32);
			this->High->TabIndex = 16;
			this->High->Text = L"˦";
			this->High->UseVisualStyleBackColor = true;
			this->High->Visible = false;
			this->High->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// HighDiacritic
			// 
			this->HighDiacritic->Location = System::Drawing::Point(681, 246);
			this->HighDiacritic->Name = L"HighDiacritic";
			this->HighDiacritic->Size = System::Drawing::Size(25, 32);
			this->HighDiacritic->TabIndex = 16;
			this->HighDiacritic->Text = L" ́";
			this->HighDiacritic->UseVisualStyleBackColor = true;
			this->HighDiacritic->Visible = false;
			this->HighDiacritic->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MidDiacritic
			// 
			this->MidDiacritic->Location = System::Drawing::Point(681, 284);
			this->MidDiacritic->Name = L"MidDiacritic";
			this->MidDiacritic->Size = System::Drawing::Size(25, 32);
			this->MidDiacritic->TabIndex = 16;
			this->MidDiacritic->Text = L" ̄";
			this->MidDiacritic->UseVisualStyleBackColor = true;
			this->MidDiacritic->Visible = false;
			this->MidDiacritic->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Mid
			// 
			this->Mid->Location = System::Drawing::Point(738, 282);
			this->Mid->Name = L"Mid";
			this->Mid->Size = System::Drawing::Size(25, 32);
			this->Mid->TabIndex = 16;
			this->Mid->Text = L"˧";
			this->Mid->UseVisualStyleBackColor = true;
			this->Mid->Visible = false;
			this->Mid->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// Low
			// 
			this->Low->Location = System::Drawing::Point(738, 315);
			this->Low->Name = L"Low";
			this->Low->Size = System::Drawing::Size(25, 32);
			this->Low->TabIndex = 16;
			this->Low->Text = L"˨";
			this->Low->UseVisualStyleBackColor = true;
			this->Low->Visible = false;
			this->Low->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// LowDiacritic
			// 
			this->LowDiacritic->Location = System::Drawing::Point(681, 315);
			this->LowDiacritic->Name = L"LowDiacritic";
			this->LowDiacritic->Size = System::Drawing::Size(25, 32);
			this->LowDiacritic->TabIndex = 16;
			this->LowDiacritic->Text = L" ̀";
			this->LowDiacritic->UseVisualStyleBackColor = true;
			this->LowDiacritic->Visible = false;
			this->LowDiacritic->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ExtraLowDiacritic
			// 
			this->ExtraLowDiacritic->Location = System::Drawing::Point(681, 353);
			this->ExtraLowDiacritic->Name = L"ExtraLowDiacritic";
			this->ExtraLowDiacritic->Size = System::Drawing::Size(25, 32);
			this->ExtraLowDiacritic->TabIndex = 16;
			this->ExtraLowDiacritic->Text = L" ̏";
			this->ExtraLowDiacritic->UseVisualStyleBackColor = true;
			this->ExtraLowDiacritic->Visible = false;
			this->ExtraLowDiacritic->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ExtraLow
			// 
			this->ExtraLow->Location = System::Drawing::Point(738, 353);
			this->ExtraLow->Name = L"ExtraLow";
			this->ExtraLow->Size = System::Drawing::Size(25, 32);
			this->ExtraLow->TabIndex = 16;
			this->ExtraLow->Text = L"˩";
			this->ExtraLow->UseVisualStyleBackColor = true;
			this->ExtraLow->Visible = false;
			this->ExtraLow->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// DownStep
			// 
			this->DownStep->Location = System::Drawing::Point(681, 385);
			this->DownStep->Name = L"DownStep";
			this->DownStep->Size = System::Drawing::Size(25, 32);
			this->DownStep->TabIndex = 16;
			this->DownStep->Text = L"ꜜ";
			this->DownStep->UseVisualStyleBackColor = true;
			this->DownStep->Visible = false;
			this->DownStep->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// Upstep
			// 
			this->Upstep->Location = System::Drawing::Point(681, 420);
			this->Upstep->Name = L"Upstep";
			this->Upstep->Size = System::Drawing::Size(25, 32);
			this->Upstep->TabIndex = 16;
			this->Upstep->Text = L"ꜛ";
			this->Upstep->UseVisualStyleBackColor = true;
			this->Upstep->Visible = false;
			this->Upstep->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// GlobalFall
			// 
			this->GlobalFall->Location = System::Drawing::Point(842, 420);
			this->GlobalFall->Name = L"GlobalFall";
			this->GlobalFall->Size = System::Drawing::Size(32, 35);
			this->GlobalFall->TabIndex = 16;
			this->GlobalFall->Text = L"↘︎";
			this->GlobalFall->UseVisualStyleBackColor = true;
			this->GlobalFall->Visible = false;
			this->GlobalFall->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// GlobalRise
			// 
			this->GlobalRise->Location = System::Drawing::Point(842, 385);
			this->GlobalRise->Name = L"GlobalRise";
			this->GlobalRise->Size = System::Drawing::Size(32, 35);
			this->GlobalRise->TabIndex = 16;
			this->GlobalRise->Text = L"↗︎";
			this->GlobalRise->UseVisualStyleBackColor = true;
			this->GlobalRise->Visible = false;
			this->GlobalRise->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// RisingFallingDiacritic
			// 
			this->RisingFallingDiacritic->Location = System::Drawing::Point(844, 350);
			this->RisingFallingDiacritic->Name = L"RisingFallingDiacritic";
			this->RisingFallingDiacritic->Size = System::Drawing::Size(26, 29);
			this->RisingFallingDiacritic->TabIndex = 16;
			this->RisingFallingDiacritic->Text = L" ᷉";
			this->RisingFallingDiacritic->UseVisualStyleBackColor = true;
			this->RisingFallingDiacritic->Visible = false;
			this->RisingFallingDiacritic->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// LowRisingDiacritic
			// 
			this->LowRisingDiacritic->Location = System::Drawing::Point(844, 317);
			this->LowRisingDiacritic->Name = L"LowRisingDiacritic";
			this->LowRisingDiacritic->Size = System::Drawing::Size(26, 29);
			this->LowRisingDiacritic->TabIndex = 16;
			this->LowRisingDiacritic->Text = L" ᷅";
			this->LowRisingDiacritic->UseVisualStyleBackColor = true;
			this->LowRisingDiacritic->Visible = false;
			this->LowRisingDiacritic->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// HighRisingDiactritic
			// 
			this->HighRisingDiactritic->Location = System::Drawing::Point(844, 282);
			this->HighRisingDiactritic->Name = L"HighRisingDiactritic";
			this->HighRisingDiactritic->Size = System::Drawing::Size(26, 29);
			this->HighRisingDiactritic->TabIndex = 16;
			this->HighRisingDiactritic->Text = L" ᷄";
			this->HighRisingDiactritic->UseVisualStyleBackColor = true;
			this->HighRisingDiactritic->Visible = false;
			this->HighRisingDiactritic->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// FallingDiacritic
			// 
			this->FallingDiacritic->Location = System::Drawing::Point(842, 248);
			this->FallingDiacritic->Name = L"FallingDiacritic";
			this->FallingDiacritic->Size = System::Drawing::Size(26, 29);
			this->FallingDiacritic->TabIndex = 16;
			this->FallingDiacritic->Text = L" ̂";
			this->FallingDiacritic->UseVisualStyleBackColor = true;
			this->FallingDiacritic->Visible = false;
			this->FallingDiacritic->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// RisingDiacritic
			// 
			this->RisingDiacritic->Location = System::Drawing::Point(842, 211);
			this->RisingDiacritic->Name = L"RisingDiacritic";
			this->RisingDiacritic->Size = System::Drawing::Size(26, 29);
			this->RisingDiacritic->TabIndex = 16;
			this->RisingDiacritic->Text = L" ̌";
			this->RisingDiacritic->UseVisualStyleBackColor = true;
			this->RisingDiacritic->Visible = false;
			this->RisingDiacritic->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Rising
			// 
			this->Rising->Location = System::Drawing::Point(894, 211);
			this->Rising->Name = L"Rising";
			this->Rising->Size = System::Drawing::Size(26, 29);
			this->Rising->TabIndex = 16;
			this->Rising->Text = L"˩˥";
			this->Rising->UseVisualStyleBackColor = true;
			this->Rising->Visible = false;
			this->Rising->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Falling
			// 
			this->Falling->Location = System::Drawing::Point(894, 246);
			this->Falling->Name = L"Falling";
			this->Falling->Size = System::Drawing::Size(26, 29);
			this->Falling->TabIndex = 16;
			this->Falling->Text = L"˥˩";
			this->Falling->UseVisualStyleBackColor = true;
			this->Falling->Visible = false;
			this->Falling->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// HighRising
			// 
			this->HighRising->Location = System::Drawing::Point(894, 281);
			this->HighRising->Name = L"HighRising";
			this->HighRising->Size = System::Drawing::Size(26, 29);
			this->HighRising->TabIndex = 16;
			this->HighRising->Text = L"˧˥";
			this->HighRising->UseVisualStyleBackColor = true;
			this->HighRising->Visible = false;
			this->HighRising->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// LowRising
			// 
			this->LowRising->Location = System::Drawing::Point(894, 318);
			this->LowRising->Name = L"LowRising";
			this->LowRising->Size = System::Drawing::Size(26, 29);
			this->LowRising->TabIndex = 16;
			this->LowRising->Text = L"˩˧";
			this->LowRising->UseVisualStyleBackColor = true;
			this->LowRising->Visible = false;
			this->LowRising->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// RisingFalling
			// 
			this->RisingFalling->Location = System::Drawing::Point(894, 350);
			this->RisingFalling->Name = L"RisingFalling";
			this->RisingFalling->Size = System::Drawing::Size(26, 29);
			this->RisingFalling->TabIndex = 16;
			this->RisingFalling->Text = L"˧˦˨";
			this->RisingFalling->UseVisualStyleBackColor = true;
			this->RisingFalling->Visible = false;
			this->RisingFalling->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// Slashes
			// 
			this->Slashes->Location = System::Drawing::Point(12, 173);
			this->Slashes->Name = L"Slashes";
			this->Slashes->Size = System::Drawing::Size(51, 67);
			this->Slashes->TabIndex = 17;
			this->Slashes->Text = L"/.../";
			this->Slashes->UseVisualStyleBackColor = true;
			this->Slashes->Click += gcnew System::EventHandler(this, &MyForm::Slashes_Click);
			// 
			// SquareBrackets
			// 
			this->SquareBrackets->Location = System::Drawing::Point(12, 265);
			this->SquareBrackets->Name = L"SquareBrackets";
			this->SquareBrackets->Size = System::Drawing::Size(51, 67);
			this->SquareBrackets->TabIndex = 17;
			this->SquareBrackets->Text = L"[...]";
			this->SquareBrackets->UseVisualStyleBackColor = true;
			this->SquareBrackets->Click += gcnew System::EventHandler(this, &MyForm::SquareBrackets_Click);
			// 
			// AngleBrackets
			// 
			this->AngleBrackets->Location = System::Drawing::Point(12, 361);
			this->AngleBrackets->Name = L"AngleBrackets";
			this->AngleBrackets->Size = System::Drawing::Size(51, 67);
			this->AngleBrackets->TabIndex = 17;
			this->AngleBrackets->Text = L"⟨...⟩";
			this->AngleBrackets->UseVisualStyleBackColor = true;
			this->AngleBrackets->Click += gcnew System::EventHandler(this, &MyForm::AngleBrackets_Click);
			// 
			// CurlyBrackets
			// 
			this->CurlyBrackets->Location = System::Drawing::Point(87, 173);
			this->CurlyBrackets->Name = L"CurlyBrackets";
			this->CurlyBrackets->Size = System::Drawing::Size(51, 67);
			this->CurlyBrackets->TabIndex = 17;
			this->CurlyBrackets->Text = L"{...}";
			this->CurlyBrackets->UseVisualStyleBackColor = true;
			this->CurlyBrackets->Visible = false;
			this->CurlyBrackets->Click += gcnew System::EventHandler(this, &MyForm::CurlyBrackets_Click);
			// 
			// Parentheses
			// 
			this->Parentheses->Location = System::Drawing::Point(87, 265);
			this->Parentheses->Name = L"Parentheses";
			this->Parentheses->Size = System::Drawing::Size(51, 67);
			this->Parentheses->TabIndex = 17;
			this->Parentheses->Text = L"(...)";
			this->Parentheses->UseVisualStyleBackColor = true;
			this->Parentheses->Visible = false;
			this->Parentheses->Click += gcnew System::EventHandler(this, &MyForm::Parentheses_Click);
			// 
			// DoubleParentheses
			// 
			this->DoubleParentheses->Location = System::Drawing::Point(87, 361);
			this->DoubleParentheses->Name = L"DoubleParentheses";
			this->DoubleParentheses->Size = System::Drawing::Size(51, 67);
			this->DoubleParentheses->TabIndex = 17;
			this->DoubleParentheses->Text = L"⸨...⸩";
			this->DoubleParentheses->UseVisualStyleBackColor = true;
			this->DoubleParentheses->Visible = false;
			this->DoubleParentheses->Click += gcnew System::EventHandler(this, &MyForm::DoubleParentheses_Click);
			// 
			// DoubleSquareBrackets
			// 
			this->DoubleSquareBrackets->Location = System::Drawing::Point(154, 173);
			this->DoubleSquareBrackets->Name = L"DoubleSquareBrackets";
			this->DoubleSquareBrackets->Size = System::Drawing::Size(51, 67);
			this->DoubleSquareBrackets->TabIndex = 17;
			this->DoubleSquareBrackets->Text = L"⟦...⟧";
			this->DoubleSquareBrackets->UseVisualStyleBackColor = true;
			this->DoubleSquareBrackets->Visible = false;
			this->DoubleSquareBrackets->Click += gcnew System::EventHandler(this, &MyForm::DoubleSquareBrackets_Click);
			// 
			// DoubleSlashes
			// 
			this->DoubleSlashes->Location = System::Drawing::Point(154, 265);
			this->DoubleSlashes->Name = L"DoubleSlashes";
			this->DoubleSlashes->Size = System::Drawing::Size(51, 67);
			this->DoubleSlashes->TabIndex = 17;
			this->DoubleSlashes->Text = L"⫽...⫽";
			this->DoubleSlashes->UseVisualStyleBackColor = true;
			this->DoubleSlashes->Visible = false;
			this->DoubleSlashes->Click += gcnew System::EventHandler(this, &MyForm::DoubleSlashes_Click);
			// 
			// DoubleAngleBrackets
			// 
			this->DoubleAngleBrackets->Location = System::Drawing::Point(154, 361);
			this->DoubleAngleBrackets->Name = L"DoubleAngleBrackets";
			this->DoubleAngleBrackets->Size = System::Drawing::Size(51, 67);
			this->DoubleAngleBrackets->TabIndex = 17;
			this->DoubleAngleBrackets->Text = L"⟪...⟫";
			this->DoubleAngleBrackets->UseVisualStyleBackColor = true;
			this->DoubleAngleBrackets->Visible = false;
			this->DoubleAngleBrackets->Click += gcnew System::EventHandler(this, &MyForm::DoubleAngleBrackets_Click);
			// 
			// Backspace
			// 
			this->Backspace->Location = System::Drawing::Point(1054, 138);
			this->Backspace->Name = L"Backspace";
			this->Backspace->Size = System::Drawing::Size(51, 67);
			this->Backspace->TabIndex = 17;
			this->Backspace->Text = L"←";
			this->Backspace->UseVisualStyleBackColor = true;
			this->Backspace->Click += gcnew System::EventHandler(this, &MyForm::Backspace_Click);
			// 
			// Enter
			// 
			this->Enter->Location = System::Drawing::Point(1054, 246);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(51, 67);
			this->Enter->TabIndex = 17;
			this->Enter->Text = L"Copy To Clipboard";
			this->Enter->UseVisualStyleBackColor = true;
			this->Enter->Click += gcnew System::EventHandler(this, &MyForm::Enter_Click);
			// 
			// VoicelessAbove
			// 
			this->VoicelessAbove->Location = System::Drawing::Point(302, 122);
			this->VoicelessAbove->Name = L"VoicelessAbove";
			this->VoicelessAbove->Size = System::Drawing::Size(24, 29);
			this->VoicelessAbove->TabIndex = 14;
			this->VoicelessAbove->Text = L" ̊";
			this->VoicelessAbove->UseVisualStyleBackColor = true;
			this->VoicelessAbove->Visible = false;
			this->VoicelessAbove->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MoreRoundedAbove
			// 
			this->MoreRoundedAbove->Location = System::Drawing::Point(331, 231);
			this->MoreRoundedAbove->Name = L"MoreRoundedAbove";
			this->MoreRoundedAbove->Size = System::Drawing::Size(24, 29);
			this->MoreRoundedAbove->TabIndex = 14;
			this->MoreRoundedAbove->Text = L"  ͗";
			this->MoreRoundedAbove->UseVisualStyleBackColor = true;
			this->MoreRoundedAbove->Visible = false;
			this->MoreRoundedAbove->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// LessRoundedAbove
			// 
			this->LessRoundedAbove->Location = System::Drawing::Point(327, 266);
			this->LessRoundedAbove->Name = L"LessRoundedAbove";
			this->LessRoundedAbove->Size = System::Drawing::Size(24, 29);
			this->LessRoundedAbove->TabIndex = 14;
			this->LessRoundedAbove->Text = L" ͑";
			this->LessRoundedAbove->UseVisualStyleBackColor = true;
			this->LessRoundedAbove->Visible = false;
			this->LessRoundedAbove->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// RetractedAbove
			// 
			this->RetractedAbove->Location = System::Drawing::Point(309, 341);
			this->RetractedAbove->Name = L"RetractedAbove";
			this->RetractedAbove->Size = System::Drawing::Size(24, 29);
			this->RetractedAbove->TabIndex = 14;
			this->RetractedAbove->Text = L" ̄";
			this->RetractedAbove->UseVisualStyleBackColor = true;
			this->RetractedAbove->Visible = false;
			this->RetractedAbove->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// SyllabicAbove
			// 
			this->SyllabicAbove->Location = System::Drawing::Point(309, 448);
			this->SyllabicAbove->Name = L"SyllabicAbove";
			this->SyllabicAbove->Size = System::Drawing::Size(24, 29);
			this->SyllabicAbove->TabIndex = 14;
			this->SyllabicAbove->Text = L" ̍";
			this->SyllabicAbove->UseVisualStyleBackColor = true;
			this->SyllabicAbove->Visible = false;
			this->SyllabicAbove->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// NonSyllabicAbove
			// 
			this->NonSyllabicAbove->Location = System::Drawing::Point(331, 484);
			this->NonSyllabicAbove->Name = L"NonSyllabicAbove";
			this->NonSyllabicAbove->Size = System::Drawing::Size(24, 29);
			this->NonSyllabicAbove->TabIndex = 14;
			this->NonSyllabicAbove->Text = L" ̑";
			this->NonSyllabicAbove->UseVisualStyleBackColor = true;
			this->NonSyllabicAbove->Visible = false;
			this->NonSyllabicAbove->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Clear
			// 
			this->Clear->Location = System::Drawing::Point(1054, 364);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(51, 67);
			this->Clear->TabIndex = 17;
			this->Clear->Text = L"Clear";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// DentalAbove
			// 
			this->DentalAbove->Location = System::Drawing::Point(746, 121);
			this->DentalAbove->Name = L"DentalAbove";
			this->DentalAbove->Size = System::Drawing::Size(24, 29);
			this->DentalAbove->TabIndex = 14;
			this->DentalAbove->Text = L" ͆";
			this->DentalAbove->UseVisualStyleBackColor = true;
			this->DentalAbove->Visible = false;
			this->DentalAbove->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Tilde
			// 
			this->Tilde->Location = System::Drawing::Point(690, 488);
			this->Tilde->Name = L"Tilde";
			this->Tilde->Size = System::Drawing::Size(46, 31);
			this->Tilde->TabIndex = 18;
			this->Tilde->Text = L"~";
			this->Tilde->UseVisualStyleBackColor = true;
			this->Tilde->Visible = false;
			this->Tilde->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// Space
			// 
			this->Space->Location = System::Drawing::Point(746, 488);
			this->Space->Name = L"Space";
			this->Space->Size = System::Drawing::Size(46, 31);
			this->Space->TabIndex = 18;
			this->Space->Text = L"Space";
			this->Space->UseVisualStyleBackColor = true;
			this->Space->Visible = false;
			this->Space->Click += gcnew System::EventHandler(this, &MyForm::Space_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1145, 644);
			this->Controls->Add(this->Space);
			this->Controls->Add(this->Tilde);
			this->Controls->Add(this->DentalAbove);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->Backspace);
			this->Controls->Add(this->DoubleAngleBrackets);
			this->Controls->Add(this->DoubleParentheses);
			this->Controls->Add(this->AngleBrackets);
			this->Controls->Add(this->DoubleSlashes);
			this->Controls->Add(this->Parentheses);
			this->Controls->Add(this->SquareBrackets);
			this->Controls->Add(this->DoubleSquareBrackets);
			this->Controls->Add(this->CurlyBrackets);
			this->Controls->Add(this->Slashes);
			this->Controls->Add(this->RisingFalling);
			this->Controls->Add(this->LowRising);
			this->Controls->Add(this->HighRising);
			this->Controls->Add(this->Falling);
			this->Controls->Add(this->Rising);
			this->Controls->Add(this->RisingDiacritic);
			this->Controls->Add(this->FallingDiacritic);
			this->Controls->Add(this->HighRisingDiactritic);
			this->Controls->Add(this->LowRisingDiacritic);
			this->Controls->Add(this->RisingFallingDiacritic);
			this->Controls->Add(this->GlobalRise);
			this->Controls->Add(this->GlobalFall);
			this->Controls->Add(this->Upstep);
			this->Controls->Add(this->DownStep);
			this->Controls->Add(this->ExtraLow);
			this->Controls->Add(this->ExtraLowDiacritic);
			this->Controls->Add(this->LowDiacritic);
			this->Controls->Add(this->Low);
			this->Controls->Add(this->Mid);
			this->Controls->Add(this->MidDiacritic);
			this->Controls->Add(this->HighDiacritic);
			this->Controls->Add(this->High);
			this->Controls->Add(this->ExtraHigh);
			this->Controls->Add(this->ExtraHighDiacritic);
			this->Controls->Add(this->Linking);
			this->Controls->Add(this->SyllableBreak);
			this->Controls->Add(this->MajorIntonationGroup);
			this->Controls->Add(this->MinorFootGroup);
			this->Controls->Add(this->ExtraShort);
			this->Controls->Add(this->HalfLong);
			this->Controls->Add(this->Long);
			this->Controls->Add(this->SecondaryStress);
			this->Controls->Add(this->PrimaryStress);
			this->Controls->Add(this->TonesAndWordAccentsPic);
			this->Controls->Add(this->SuprasegmantalsPic);
			this->Controls->Add(this->NoAudibleRelease);
			this->Controls->Add(this->LateralRelease);
			this->Controls->Add(this->NasalRelease);
			this->Controls->Add(this->Nasalized);
			this->Controls->Add(this->Laminal);
			this->Controls->Add(this->Apical);
			this->Controls->Add(this->Dental);
			this->Controls->Add(this->RetractedToungeRoot);
			this->Controls->Add(this->AdvancedToungeRoot);
			this->Controls->Add(this->Lowered);
			this->Controls->Add(this->Raised);
			this->Controls->Add(this->VelarizedOrPharyngealized);
			this->Controls->Add(this->Pharyngealized);
			this->Controls->Add(this->Velarized);
			this->Controls->Add(this->Palatalized);
			this->Controls->Add(this->Labialized);
			this->Controls->Add(this->Linguolabial);
			this->Controls->Add(this->CreakyVoiced);
			this->Controls->Add(this->BreathyVoiced);
			this->Controls->Add(this->Rhoticity);
			this->Controls->Add(this->NonSyllabic);
			this->Controls->Add(this->Syllabic);
			this->Controls->Add(this->MidCentralised);
			this->Controls->Add(this->Centralized);
			this->Controls->Add(this->Retracted);
			this->Controls->Add(this->Advanced);
			this->Controls->Add(this->LessRounded);
			this->Controls->Add(this->MoreRounded);
			this->Controls->Add(this->Aspirated);
			this->Controls->Add(this->NonSyllabicAbove);
			this->Controls->Add(this->SyllabicAbove);
			this->Controls->Add(this->RetractedAbove);
			this->Controls->Add(this->LessRoundedAbove);
			this->Controls->Add(this->Voiced);
			this->Controls->Add(this->MoreRoundedAbove);
			this->Controls->Add(this->VoicelessAbove);
			this->Controls->Add(this->Voiceless);
			this->Controls->Add(this->DiacriticsPic);
			this->Controls->Add(this->MidCentral);
			this->Controls->Add(this->NearOpenCentral);
			this->Controls->Add(this->NearOpenFrontUnrounded);
			this->Controls->Add(this->OpenFrontUnrounded);
			this->Controls->Add(this->OpenFrontRounded);
			this->Controls->Add(this->OpenBackUnrounded);
			this->Controls->Add(this->OpenBackRounded);
			this->Controls->Add(this->OpenMidBackRounded);
			this->Controls->Add(this->OpenMidBackUnrounded);
			this->Controls->Add(this->OpenMidCentralRounded);
			this->Controls->Add(this->OpenMidCentralUnrounded);
			this->Controls->Add(this->OpenMidFrontRounded);
			this->Controls->Add(this->OpenMidFrontUnrounded);
			this->Controls->Add(this->CloseMidFrontRounded);
			this->Controls->Add(this->CloseMidCentralUnrounded);
			this->Controls->Add(this->CloseMidCentralRounded);
			this->Controls->Add(this->NearCloseNearBackRounded);
			this->Controls->Add(this->CloseMidBackUnrounded);
			this->Controls->Add(this->CloseMidBackRounded);
			this->Controls->Add(this->CloseBackRounded);
			this->Controls->Add(this->CloseBackUnrounded);
			this->Controls->Add(this->CloseCentralRounded);
			this->Controls->Add(this->CloseCentralUnrounded);
			this->Controls->Add(this->NearCloseNearFrontRounded);
			this->Controls->Add(this->NearCloseNearFrontUnrounded);
			this->Controls->Add(this->CloseMidFrontUnrounded);
			this->Controls->Add(this->CloseFrontRounded);
			this->Controls->Add(this->CloseFrontUnrounded);
			this->Controls->Add(this->VowelsPic);
			this->Controls->Add(this->VoicedAlveoloPalatalFricative);
			this->Controls->Add(this->UnvoicedAlveoloPalatalFricative);
			this->Controls->Add(this->EpiglottalPlosive);
			this->Controls->Add(this->VoicedEpiglottalFricative);
			this->Controls->Add(this->VoicelessEpiglottalFricative);
			this->Controls->Add(this->LinkBelow);
			this->Controls->Add(this->LinkAbove);
			this->Controls->Add(this->VoicedAlveolarLateralFlap);
			this->Controls->Add(this->UnvoicedPostalveoloVelarFricative);
			this->Controls->Add(this->VoicedLabialPalatalApproximant);
			this->Controls->Add(this->VoicedLabialVelarApproximant);
			this->Controls->Add(this->VoicelessLabialVelarFricative);
			this->Controls->Add(this->ConsonantsOPic);
			this->Controls->Add(this->Ejective);
			this->Controls->Add(this->UvularImplosive);
			this->Controls->Add(this->VelarImplosive);
			this->Controls->Add(this->PalatalImplosive);
			this->Controls->Add(this->DentalAlveolarImplosive);
			this->Controls->Add(this->BilabialImplosive);
			this->Controls->Add(this->AlveolarLateralClick);
			this->Controls->Add(this->PalatoalveolarClick);
			this->Controls->Add(this->AlveolarClick);
			this->Controls->Add(this->DentalClick);
			this->Controls->Add(this->BilabialClick);
			this->Controls->Add(this->ConsonantsNPPic);
			this->Controls->Add(this->VoicedPalatalPlosive);
			this->Controls->Add(this->RetroflexLateralApproximant);
			this->Controls->Add(this->RetroflexApproximant);
			this->Controls->Add(this->PalatalApproximant);
			this->Controls->Add(this->PalatalLateralApproximant);
			this->Controls->Add(this->VelarLateralApproximant);
			this->Controls->Add(this->VelarApproximant);
			this->Controls->Add(this->VoicedGlottalFricative);
			this->Controls->Add(this->UnvoicedGlottalFricative);
			this->Controls->Add(this->VoicedPharyngealFricative);
			this->Controls->Add(this->UnvoicedPharyngealFricative);
			this->Controls->Add(this->UnvoicedPalatalFricative);
			this->Controls->Add(this->VoicedPalatalFricative);
			this->Controls->Add(this->UnvoicedVelarFricative);
			this->Controls->Add(this->VoicedVelarFricative);
			this->Controls->Add(this->UnvoicedUvularFricative);
			this->Controls->Add(this->VoicedUvularFricative);
			this->Controls->Add(this->UvularTrill);
			this->Controls->Add(this->UvularNasal);
			this->Controls->Add(this->PalatalNasal);
			this->Controls->Add(this->VelarNasal);
			this->Controls->Add(this->GlottalPlosive);
			this->Controls->Add(this->VoicedUvularPlosive);
			this->Controls->Add(this->UnvoicedUvularPlosive);
			this->Controls->Add(this->VoicedVelarPlosive);
			this->Controls->Add(this->UnvoicedVelarPlosive);
			this->Controls->Add(this->UnvoicedPalatalPlosive);
			this->Controls->Add(this->RetroflexNasal);
			this->Controls->Add(this->VoicedRetroflexPlosive);
			this->Controls->Add(this->UnvoicedRetroflexPlosive);
			this->Controls->Add(this->UnvoicedRetroflexFricative);
			this->Controls->Add(this->VoicedRetroflexFricative);
			this->Controls->Add(this->RetroflexFlap);
			this->Controls->Add(this->AlveolarLateralApproximant);
			this->Controls->Add(this->AlveolarApproximant);
			this->Controls->Add(this->VoicedPostalveolarFricative);
			this->Controls->Add(this->UnvoicedPostalveolarFricative);
			this->Controls->Add(this->VoicedAlveolarLateralFricative);
			this->Controls->Add(this->UnvoicedAlveolarLateralFricative);
			this->Controls->Add(this->LabiodentalApproximant);
			this->Controls->Add(this->LabiodentalFlap);
			this->Controls->Add(this->UnvoicedLabiodentalFricative);
			this->Controls->Add(this->VoicedLabiodentalFricative);
			this->Controls->Add(this->UnvoicedDentalFricative);
			this->Controls->Add(this->VoicedDentalFricative);
			this->Controls->Add(this->UnvoicedAlveolarFricative);
			this->Controls->Add(this->VoicedAlveolarFricative);
			this->Controls->Add(this->AlveolarTap);
			this->Controls->Add(this->AlveolarTrill);
			this->Controls->Add(this->AlveolarNasal);
			this->Controls->Add(this->VoicedAlveolarPlosive);
			this->Controls->Add(this->UnvoicedAlveolarPlosive);
			this->Controls->Add(this->VoicedBilabialFricative);
			this->Controls->Add(this->UnvoicedBilabialFricative);
			this->Controls->Add(this->LabiodentalNasal);
			this->Controls->Add(this->BilabialTrill);
			this->Controls->Add(this->VoicedBilabialPlosive);
			this->Controls->Add(this->BilabialNasal);
			this->Controls->Add(this->UnvoicedBilabialPlosive);
			this->Controls->Add(this->ConsonantsPPic);
			this->Controls->Add(this->Other);
			this->Controls->Add(this->Vowels);
			this->Controls->Add(this->Diacritics);
			this->Controls->Add(this->ConsonantsO);
			this->Controls->Add(this->ConsonantsNP);
			this->Controls->Add(this->ConsonantsP);
			this->Controls->Add(this->input);
			this->Name = L"MyForm";
			this->Text = L"IPA";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConsonantsPPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConsonantsNPPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConsonantsOPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VowelsPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DiacriticsPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SuprasegmantalsPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TonesAndWordAccentsPic))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	//////////////////////////////////////////////////////////////////////////////////////
	private: bool firstSquareBracket = true;
	private: bool firstAngleBracket = true;
	private: bool firstCurlyBracket = true;
	private: bool firstParentheses = true;
	private: bool firstDoubleParentheses = true;
	private: bool firstDoubleSquareBrackets = true;
	private: bool firstDoubleAngleBrackets = true;

	private: System::Void ShowConsonants(bool x)
	{
		VoicedPalatalPlosive->Visible = x;
		RetroflexLateralApproximant->Visible = x;
		RetroflexApproximant->Visible = x;
		PalatalApproximant->Visible = x;
		PalatalLateralApproximant->Visible = x;
		VelarLateralApproximant->Visible = x;
		VelarApproximant->Visible = x;
		VoicedGlottalFricative->Visible = x;
		UnvoicedGlottalFricative->Visible = x;
		VoicedPharyngealFricative->Visible = x;
		UnvoicedPharyngealFricative->Visible = x;
		UnvoicedPalatalFricative->Visible = x;
		VoicedPalatalFricative->Visible = x;
		UnvoicedVelarFricative->Visible = x;
		VoicedVelarFricative->Visible = x;
		UnvoicedUvularFricative->Visible = x;
		VoicedUvularFricative->Visible = x;
		UvularTrill->Visible = x;
		UvularNasal->Visible = x;
		PalatalNasal->Visible = x;
		VelarNasal->Visible = x;
		GlottalPlosive->Visible = x;
		VoicedUvularPlosive->Visible = x;
		UnvoicedUvularPlosive->Visible = x;
		VoicedVelarPlosive->Visible = x;
		UnvoicedVelarPlosive->Visible = x;
		UnvoicedPalatalPlosive->Visible = x;
		RetroflexNasal->Visible = x;
		VoicedRetroflexPlosive->Visible = x;
		UnvoicedRetroflexPlosive->Visible = x;
		UnvoicedRetroflexFricative->Visible = x;
		VoicedRetroflexFricative->Visible = x;
		RetroflexFlap->Visible = x;
		AlveolarLateralApproximant->Visible = x;
		AlveolarApproximant->Visible = x;
		VoicedPostalveolarFricative->Visible = x;
		UnvoicedPostalveolarFricative->Visible = x;
		VoicedAlveolarLateralFricative->Visible = x;
		UnvoicedAlveolarLateralFricative->Visible = x;
		LabiodentalApproximant->Visible = x;
		LabiodentalFlap->Visible = x;
		UnvoicedLabiodentalFricative->Visible = x;
		VoicedLabiodentalFricative->Visible = x;
		UnvoicedDentalFricative->Visible = x;
		VoicedDentalFricative->Visible = x;
		UnvoicedAlveolarFricative->Visible = x;
		VoicedAlveolarFricative->Visible = x;
		AlveolarTap->Visible = x;
		AlveolarTrill->Visible = x;
		AlveolarNasal->Visible = x;
		VoicedAlveolarPlosive->Visible = x;
		UnvoicedAlveolarPlosive->Visible = x;
		VoicedBilabialFricative->Visible = x;
		UnvoicedBilabialFricative->Visible = x;
		LabiodentalNasal->Visible = x;
		BilabialTrill->Visible = x;
		VoicedBilabialPlosive->Visible = x;
		BilabialNasal->Visible = x;
		UnvoicedBilabialPlosive->Visible = x;
		ConsonantsPPic->Visible = x;
	}
	private: System::Void ShowNPConsonants(bool x)
	{
		BilabialClick->Visible = x;
		DentalClick->Visible = x;
		AlveolarClick->Visible = x;
		PalatoalveolarClick->Visible = x;
		AlveolarLateralClick->Visible = x;
		BilabialImplosive->Visible = x;
		DentalAlveolarImplosive->Visible = x;
		PalatalImplosive->Visible = x;
		VelarImplosive->Visible = x;
		UvularImplosive->Visible = x;
		Ejective->Visible = x;
		ConsonantsNPPic->Visible = x;
	}
	private: System::Void ShowOConsonants(bool x)
	{
		VoicedAlveoloPalatalFricative->Visible = x;
		UnvoicedAlveoloPalatalFricative->Visible = x;
		EpiglottalPlosive->Visible = x;
		VoicedEpiglottalFricative->Visible = x;
		VoicelessEpiglottalFricative->Visible = x;
		LinkBelow->Visible = x;
		LinkAbove->Visible = x;
		VoicedAlveolarLateralFlap->Visible = x;
		UnvoicedPostalveoloVelarFricative->Visible = x;
		VoicedLabialPalatalApproximant->Visible = x;
		VoicedLabialVelarApproximant->Visible = x;
		VoicelessLabialVelarFricative->Visible = x;
		ConsonantsOPic->Visible = x;
	}
	private: System::Void ShowVowels(bool x)
	{
		MidCentral->Visible = x;
		NearOpenCentral->Visible = x;
		NearOpenFrontUnrounded->Visible = x;
		OpenFrontUnrounded->Visible = x;
		OpenFrontRounded->Visible = x;
		OpenBackUnrounded->Visible = x;
		OpenBackRounded->Visible = x;
		OpenMidBackRounded->Visible = x;
		OpenMidBackUnrounded->Visible = x;
		OpenMidCentralRounded->Visible = x;
		OpenMidCentralUnrounded->Visible = x;
		OpenMidFrontRounded->Visible = x;
		OpenMidFrontUnrounded->Visible = x;
		CloseMidFrontRounded->Visible = x;
		CloseMidCentralUnrounded->Visible = x;
		CloseMidCentralRounded->Visible = x;
		NearCloseNearBackRounded->Visible = x;
		CloseMidBackUnrounded->Visible = x;
		CloseMidBackRounded->Visible = x;
		CloseBackRounded->Visible = x;
		CloseBackUnrounded->Visible = x;
		CloseCentralRounded->Visible = x;
		CloseCentralUnrounded->Visible = x;
		NearCloseNearFrontRounded->Visible = x;
		NearCloseNearFrontUnrounded->Visible = x;
		CloseMidFrontUnrounded->Visible = x;
		CloseFrontRounded->Visible = x;
		CloseFrontUnrounded->Visible = x;
		VowelsPic->Visible = x;
	}
	private: System::Void ShowDiacritics(bool x)
	{
		NoAudibleRelease->Visible = x;
		LateralRelease->Visible = x;
		NasalRelease->Visible = x;
		Nasalized->Visible = x;
		Laminal->Visible = x;
		Apical->Visible = x;
		Dental->Visible = x;
		RetractedToungeRoot->Visible = x;
		AdvancedToungeRoot->Visible = x;
		Lowered->Visible = x;
		Raised->Visible = x;
		VelarizedOrPharyngealized->Visible = x;
		Pharyngealized->Visible = x;
		Velarized->Visible = x;
		Palatalized->Visible = x;
		Labialized->Visible = x;
		Linguolabial->Visible = x;
		CreakyVoiced->Visible = x;
		BreathyVoiced->Visible = x;
		Rhoticity->Visible = x;
		NonSyllabic->Visible = x;
		Syllabic->Visible = x;
		MidCentralised->Visible = x;
		Centralized->Visible = x;
		Retracted->Visible = x;
		Advanced->Visible = x;
		LessRounded->Visible = x;
		MoreRounded->Visible = x;
		Aspirated->Visible = x;
		Voiced->Visible = x;
		Voiceless->Visible = x;
		VoicelessAbove->Visible = x;
		MoreRoundedAbove->Visible = x;
		LessRoundedAbove->Visible = x;
		RetractedAbove->Visible = x;
		SyllabicAbove->Visible = x;
		NonSyllabicAbove->Visible = x;
		DentalAbove->Visible = x;
		DiacriticsPic->Visible = x;
	}
	private: System::Void ShowOther(bool x)
	{
		RisingFalling->Visible = x;
		LowRising->Visible = x;
		HighRising->Visible = x;
		Falling->Visible = x;
		Rising->Visible = x;
		RisingDiacritic->Visible = x;
		FallingDiacritic->Visible = x;
		HighRisingDiactritic->Visible = x;
		LowRisingDiacritic->Visible = x;
		RisingFallingDiacritic->Visible = x;
		GlobalRise->Visible = x;
		GlobalFall->Visible = x;
		Upstep->Visible = x;
		DownStep->Visible = x;
		ExtraLow->Visible = x;
		ExtraLowDiacritic->Visible = x;
		LowDiacritic->Visible = x;
		Low->Visible = x;
		Mid->Visible = x;
		MidDiacritic->Visible = x;
		HighDiacritic->Visible = x;
		High->Visible = x;
		ExtraHigh->Visible = x;
		ExtraHighDiacritic->Visible = x;
		Linking->Visible = x;
		SyllableBreak->Visible = x;
		MajorIntonationGroup->Visible = x;
		MinorFootGroup->Visible = x;
		ExtraShort->Visible = x;
		HalfLong->Visible = x;
		Long->Visible = x;
		SecondaryStress->Visible = x;
		PrimaryStress->Visible = x;
		DoubleAngleBrackets->Visible = x;
		CurlyBrackets->Visible = x;
		DoubleSquareBrackets->Visible = x;
		DoubleSlashes->Visible = x;
		DoubleParentheses->Visible = x;
		Parentheses->Visible = x;
		Tilde->Visible = x;
		Space->Visible = x;
		SuprasegmantalsPic->Visible = x;
		TonesAndWordAccentsPic->Visible = x;
	}

	private: System::Void Show(char x[])
	{
		ShowConsonants(false);
		ShowNPConsonants(false);
		ShowOConsonants(false);
		ShowVowels(false);
		ShowDiacritics(false);
		ShowOther(false);
		if (strcmp(x, "ConsonantsP") == 0)
		{
			ShowConsonants(true);
		}
		else if (strcmp(x, "ConsonantsNP") == 0)
		{
			ShowNPConsonants(true);
		}
		else if (strcmp(x, "ConsonantsO") == 0)
		{
			ShowOConsonants(true);
		}
		else if (strcmp(x, "Vowels") == 0)
		{
			ShowVowels(true);
		}
		else if (strcmp(x, "Diacritics") == 0)
		{
			ShowDiacritics(true);
		}
		else if (strcmp(x, "Other") == 0)
		{
			ShowOther(true);
		}

	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
		input->Text += sender->ToString()->Substring(35, 1);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		input->Text += sender->ToString()->Substring(36, 1);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		input->Text += sender->ToString()->Substring(35, 2);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		input->Text += sender->ToString()->Substring(35, 3);
	}

	private: System::Void ConsonantsP_Click(System::Object^ sender, System::EventArgs^ e) {
		Show("ConsonantsP");
	}
	private: System::Void ConsonantsNP_Click(System::Object^ sender, System::EventArgs^ e) {
		Show("ConsonantsNP");
	}
	private: System::Void ConsonantsO_Click(System::Object^ sender, System::EventArgs^ e) {
		Show("ConsonantsO");
	}
	private: System::Void Vowels_Click(System::Object^ sender, System::EventArgs^ e) {
		Show("Vowels");
	}
	private: System::Void Diacritics_Click(System::Object^ sender, System::EventArgs^ e) {
		Show("Diacritics");
	}
	private: System::Void Other_Click(System::Object^ sender, System::EventArgs^ e) {
		Show("Other");
	}

	private: System::Void Backspace_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			input->Text = input->Text->Substring(0, input->Text->Length - 1);
		}
		catch (...) { }
	}	
	private: System::Void Enter_Click(System::Object^ sender, System::EventArgs^ e) {
		Clipboard::SetText(input->Text);
	}
	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		input->Text = L"";
	}

	private: System::Void LinkAbove_Click(System::Object^ sender, System::EventArgs^ e) {
		input->Text += L"͡";
	}
	private: System::Void LinkBelow_Click(System::Object^ sender, System::EventArgs^ e) {
		input->Text += L"͜";
	}
	private: System::Void Space_Click(System::Object^ sender, System::EventArgs^ e) {
		input->Text += L" ";
	}
	private: System::Void SquareBrackets_Click(System::Object^ sender, System::EventArgs^ e) {
		if (firstSquareBracket)
		{
			input->Text += L"[";
		}
		else
		{
			input->Text += L"]";
		}
		firstSquareBracket = !firstSquareBracket;
	}
	private: System::Void AngleBrackets_Click(System::Object^ sender, System::EventArgs^ e) {
		if (firstAngleBracket)
		{
			input->Text += L"⟨";
		}
		else
		{
			input->Text += L"⟩";
		}
		firstAngleBracket = !firstAngleBracket;
	}
	private: System::Void CurlyBrackets_Click(System::Object^ sender, System::EventArgs^ e) {
		if (firstCurlyBracket)
		{
			input->Text += L"{";
		}
		else
		{
			input->Text += L"}";
		}
		firstCurlyBracket = !firstCurlyBracket;
	
	}
	private: System::Void Parentheses_Click(System::Object^ sender, System::EventArgs^ e) {
		if (firstParentheses)
		{
			input->Text += L"(";
		}
		else
		{
			input->Text += L")";
		}
		firstParentheses = !firstParentheses;
	}
	private: System::Void DoubleParentheses_Click(System::Object^ sender, System::EventArgs^ e) {
		if (firstDoubleParentheses)
		{
			input->Text += L"⸨";
		}
		else
		{
			input->Text += L"⸩";
		}
		firstDoubleParentheses = !firstDoubleParentheses;
	}
	private: System::Void DoubleSquareBrackets_Click(System::Object^ sender, System::EventArgs^ e) {
		if (firstDoubleSquareBrackets)
		{
			input->Text += L"⟦";
		}
		else
		{
			input->Text += L"⟧";
		}
		firstDoubleSquareBrackets = !firstDoubleSquareBrackets;
	}
	private: System::Void DoubleAngleBrackets_Click(System::Object^ sender, System::EventArgs^ e) {
		if (firstDoubleAngleBrackets)
		{
			input->Text += L"⟪";
		}
		else
		{
			input->Text += L"⟫";
		}
		firstDoubleAngleBrackets = !firstDoubleAngleBrackets;
	}
	private: System::Void Slashes_Click(System::Object^ sender, System::EventArgs^ e) {
		input->Text += L"/";
	}
	private: System::Void DoubleSlashes_Click(System::Object^ sender, System::EventArgs^ e) {
		input->Text += L"⫽";
	}
};
}
