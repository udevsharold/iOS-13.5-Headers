/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPTextViewStyle;

@interface LPTextRowStyle : NSObject {

	LPTextViewStyle* _leading;
	LPTextViewStyle* _trailing;
	long long _balancingMode;

}

@property (nonatomic,readonly) LPTextViewStyle * leading;               //@synthesize leading=_leading - In the implementation block
@property (nonatomic,readonly) LPTextViewStyle * trailing;              //@synthesize trailing=_trailing - In the implementation block
@property (assign,nonatomic) long long balancingMode;                   //@synthesize balancingMode=_balancingMode - In the implementation block
-(id)init;
-(id)left;
-(LPTextViewStyle *)leading;
-(LPTextViewStyle *)trailing;
-(id)right;
-(void)applyToAllTextViewStyles:(/*^block*/id)arg1 ;
-(long long)balancingMode;
-(void)setBalancingMode:(long long)arg1 ;
@end

