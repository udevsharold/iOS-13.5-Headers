/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface SKUIGiftAmount : NSObject <NSCopying> {

	NSString* _displayLabel;
	NSString* _partNumber;
	NSNumber* _value;

}

@property (nonatomic,copy) NSString * displayLabel;              //@synthesize displayLabel=_displayLabel - In the implementation block
@property (nonatomic,copy) NSString * partNumber;                //@synthesize partNumber=_partNumber - In the implementation block
@property (nonatomic,copy) NSNumber * value;                     //@synthesize value=_value - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(NSString *)displayLabel;
-(NSString *)partNumber;
-(id)HTTPBodyDictionary;
-(id)initWithAmountDictionary:(id)arg1 ;
-(void)setDisplayLabel:(NSString *)arg1 ;
-(void)setPartNumber:(NSString *)arg1 ;
@end

