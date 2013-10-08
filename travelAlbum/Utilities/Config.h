//
//  Config.h
//  Everalbum
//
//  Created by AppDevelopper on 30.07.13.
//  Copyright (c) 2013 Xappsoft. All rights reserved.
//

#import "UtilLib.h"

extern CGFloat _h,_w,_hAdBanner;
extern CGRect _r,_containerRect;

extern BOOL isFirstOpen,isUpdateOpen;


//extern NSString* const NotificationAddPhotoWidget;
extern NSString* const NotificationEditPhotoWidget;
extern NSString* const NotificationCropPhotoWidget;
extern NSString* const NotificationEditLabelModelView;


extern int PhotoNum;    


///extern function
void report_memory();

BOOL isPaid(void);

void generatePDFWithImages(NSArray* imgs ,NSString* filePath);


#pragma mark - Constant


#ifdef DEBUG
    #define kUniversalPassword @"abc"

#else
    #define kUniversalPassword @"fh48fhcbslaqpor"

#endif

#define kAppName @"iCamAlbum"
#define kApplink @"https://itunes.apple.com/de/app/id699053198?l=en&mt=8"
#define kIAPFullVersion @"de.xappsoft.icamalbumfree.fullversion"

//


#pragma mark - File

#define kAlbumCacheDirectory @"AlbumCache"

#pragma mark - Notification


#define kNotifiRootDismiss @"dismiss"
#define kNotifiRootOpenTextLabelVC @"openTextLabel"  // object is string, font name, color?
#define kNotificationFinishRequestAlbums @"requestAlbums"  //facebook
#define kNotificationCompleteIAPTransaction @"completeIAPTransaction"
#define kNotificationAddMoment @"addMoment"
#define kNotificationDeleteMoment @"deleteMoment"
#define kNotificationAddWidget @"addWidget"
#define kNotificationDeleteWidget @"deleteWidget"
#define kNotificationChangeMomentBGImage @"changeMomentBGImage"
#define kNotificationEditWidget @"editWidget"

#pragma mark - Setting

#define kSettingFrameEnabled @"frameEnable"
#define kEditPhotoGuideFlag @"editPhotoGuide"


#pragma mark - UI


#define kIsPad2 (isPad?2.0:1.0)

#define kRetinaScale [[UIScreen mainScreen]scale]

#define kHNavigationbar (isPad?44.0:32.0)
#define kHPopNavigationbar (isPad?(isIOS7?44.0:36.0):32.0)
//#define
#define kWPhotoWidgetFrame (isPad?10:5)
#define kwSidebar (isPad?250.0f:160.0f)
#define kSideBarContentHeight (isPad?724:288) //sidebar 自身是_h, 但content则是作为NaviController的root，所以view的高度是要减去navibar


#pragma mark - Others
#define MAXPICKEDPHOTO 10
#define kKeyBundleVersion @"bundleVersion"
#define kFBIconLink @"http://www.xappsoft.de/img/icamalbum_qrcode.png"
#define kJPEGCompressionQuality 0.6
#define kAlbumMaxNumberOfMoments 20

#define kPlaceholderImage [UIImage imageNamed:@"placeholder.jpg"]
#define kPlaceholderIcon [UIImage imageNamed:@"Info_twitter3.png"]
#define kPlaceholderIconName @"Info_twitter3.png"
#define kQRImage [UIImage imageNamed:@"icamalbum_qrcode.png"]

#define kbbbBGImage [UIImage imageNamed:@"toolbarButtonBG.png"]

#define kFontToolbarTitle [UIFont fontWithName:@"Archive" size:isPad?30:16]


#define kFontName @"Hero"

#define kColorLabelBlue [UIColor colorWithHEX:@"007AFF"]
#define kColorLabelGray [UIColor colorWithHEX:@"A2A1A1"]
#define kColorToolbarTitle [UIColor colorWithWhite:0.5 alpha:1]
#define kColorDarkPattern [UIColor colorWithPatternImage:[UIImage imageNamed:@"darkBGPattern1.png"]]
#define kColorDarkPattern2 [UIColor colorWithPatternImage:[UIImage imageNamed:@"darkBGPattern2.png"]]
#define kColorManagerDark [UIColor colorWithRed:68.0/255 green:68.0/255 blue:68.0/255 alpha:1]
#define kColorGreen [UIColor colorWithRed:155.0/255 green:196.0/255 blue:64.0/255 alpha:1]
#define kColorDarkGreen [UIColor colorWithRed:107.0/255 green:154.0/255 blue:50.0/255 alpha:1]
#define kColorLightGreen [UIColor colorWithRed:200.0/255 green:222.0/255 blue:150.0/255 alpha:1]
#define kColorYellow [UIColor colorWithRed:224.0/255 green:202.0/255 blue:161.0/255 alpha:1]
#define kColorShadow [UIColor colorWithWhite:0.4 alpha:0.8]
#define kColorSideBG  [UIColor colorWithWhite:0.3 alpha:0.8]


#define kEditMenuPhoto @"Add Photos"
#define kEditMenuBG @"Change background"
#define kEditMenuSticker @"Add stickers"
#define kEditMenuPage @"Manage pages"
#define kEditMenuText @"Add Texts"
#define kEditMenuAddCaption @"Add Caption"
#define kEditMenuRemoveCaption @"Remove Caption"


