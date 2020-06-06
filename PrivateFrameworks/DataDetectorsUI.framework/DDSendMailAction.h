/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDAction.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class NSString;

@interface DDSendMailAction : DDAction <MFMailComposeViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)localizedName;
-(int)interactionType;
-(id)icon;
-(id)viewController;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(id)notificationTitle;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(void)performFromView:(id)arg1 ;
-(BOOL)canBePerformedByOpeningURL;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
@end

