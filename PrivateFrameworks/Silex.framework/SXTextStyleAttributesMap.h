/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class NSString, NSMutableArray;

@interface SXTextStyleAttributesMap : NSObject {

	NSString* _string;
	NSMutableArray* _attributes;

}

@property (nonatomic,readonly) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSMutableArray * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(NSString *)string;
-(id)description;
-(id)initWithString:(id)arg1 ;
-(NSMutableArray *)attributes;
-(id)attributedString;
-(void)addAttributes:(id)arg1 ;
-(id)attributesMapWithAttributesForRange:(NSRange)arg1 ;
@end

