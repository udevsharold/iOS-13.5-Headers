/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSPaymentSheetPriceSectionItem : NSObject <NSCopying> {

	NSString* _label;
	NSString* _price;

}

@property (copy) NSString * label;              //@synthesize label=_label - In the implementation block
@property (copy) NSString * price;              //@synthesize price=_price - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)price;
-(void)setPrice:(NSString *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)_parseDictionary:(id)arg1 withCaseControl:(BOOL)arg2 ;
@end

