/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/_UICloudSharingControllerDelegate_Internal.h>
#import <libobjc.A.dylib/_UIDocumentSharingControllerDelegate_Private.h>

@class NSString, UIViewController, UIImage;

@interface _UICloudSharingActivity : UIActivity <_UICloudSharingControllerDelegate_Internal, _UIDocumentSharingControllerDelegate_Private> {

	NSString* _activityTitle;
	UIViewController* _activityViewController;
	BOOL _initialSharing;
	UIImage* _activityImage;

}

@property (nonatomic,retain) UIViewController * activityViewController; 
@property (nonatomic,retain) NSString * activityTitle;                               //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,retain) UIImage * activityImage;                                //@synthesize activityImage=_activityImage - In the implementation block
@property (assign,nonatomic) BOOL initialSharing;                                    //@synthesize initialSharing=_initialSharing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)activityCategory;
+(unsigned long long)_xpcAttributes;
-(id)activityType;
-(void)_cloudShareControllerDidDismiss:(id)arg1 ;
-(void)_documentSharingControllerDidDismiss:(id)arg1 ;
-(id)_systemImageName;
-(NSString *)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(UIViewController *)activityViewController;
-(UIImage *)activityImage;
-(void)performActivity;
-(BOOL)_activitySupportsPromiseURLs;
-(BOOL)initialSharing;
-(void)setActivityTitle:(NSString *)arg1 ;
-(BOOL)_isURLEligibleForSharing:(id)arg1 isInitial:(BOOL*)arg2 ;
-(void)setInitialSharing:(BOOL)arg1 ;
-(void)_setupForInitialSharing;
-(void)_setupForSharingInfo;
-(BOOL)eligibleTypeForActivity:(id)arg1 ;
-(void)setActivityViewController:(UIViewController *)arg1 ;
-(void)setActivityImage:(UIImage *)arg1 ;
@end

