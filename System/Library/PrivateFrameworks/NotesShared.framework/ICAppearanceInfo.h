/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICAppearanceInfo : NSObject {

	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isDark; 
+(id)appearanceInfoWithType:(unsigned long long)arg1 ;
+(void)enumerateAppearanceTypesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(BOOL)isDark;
@end
