/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface CCUICAPackageDescription : NSObject {

	BOOL _flipsForRightToLeftLayoutDirection;
	NSURL* _packageURL;

}

@property (nonatomic,copy,readonly) NSURL * packageURL;                            //@synthesize packageURL=_packageURL - In the implementation block
@property (assign,nonatomic) BOOL flipsForRightToLeftLayoutDirection;              //@synthesize flipsForRightToLeftLayoutDirection=_flipsForRightToLeftLayoutDirection - In the implementation block
+(id)descriptionForPackageNamed:(id)arg1 inBundle:(id)arg2 ;
-(BOOL)flipsForRightToLeftLayoutDirection;
-(void)setFlipsForRightToLeftLayoutDirection:(BOOL)arg1 ;
-(id)initWithPackageName:(id)arg1 inBundle:(id)arg2 ;
-(NSURL *)packageURL;
@end
