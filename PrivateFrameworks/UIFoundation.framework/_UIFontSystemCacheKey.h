/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/_UIFontCacheKey.h>

@interface _UIFontSystemCacheKey : _UIFontCacheKey {

	BOOL _textLegibility;
	int _traits;
	double _pointSize;

}

@property (assign,nonatomic) int traits;                       //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) double pointSize;                 //@synthesize pointSize=_pointSize - In the implementation block
@property (assign,nonatomic) BOOL textLegibility;              //@synthesize textLegibility=_textLegibility - In the implementation block
-(id)description;
-(unsigned long long)_hash;
-(double)pointSize;
-(int)traits;
-(void)setTraits:(int)arg1 ;
-(void)setPointSize:(double)arg1 ;
-(void)setTextLegibility:(BOOL)arg1 ;
-(BOOL)_isEqualToKey:(id)arg1 ;
-(BOOL)textLegibility;
@end

