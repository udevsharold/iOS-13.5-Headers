/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsFoundation/INFSentenceToken.h>

@class NSString, NSNumber;

@interface INFNumber : INFSentenceToken {

	NSString* _identifier;
	NSNumber* _value;

}

@property (nonatomic,copy) NSNumber * value;              //@synthesize value=_value - In the implementation block
+(id)numberWithIdentifier:(id)arg1 ;
-(id)identifier;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)stringForContext:(id)arg1 ;
-(id)contributingSentenceContext;
@end

