/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardHome/SBLeafIcon.h>

@interface SBSpringBoardApplicationIcon : SBLeafIcon {

	long long _interfaceStyle;

}
-(id)init;
-(id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2 ;
-(id)displayNameForLocation:(id)arg1 ;
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(BOOL)canTruncateLabel;
-(BOOL)canTightenLabel;
-(BOOL)isUninstallSupported;
-(id)initWithInterfaceStyle:(long long)arg1 ;
-(id)_generateImageWithInfo:(SBIconImageInfo)arg1 ;
@end
