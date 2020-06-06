/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class NSArray;

@interface RKEventIdentification : NSObject {

	NSArray* _tokenSequences;
	float* _probabilities;

}

@property (nonatomic,readonly) NSArray * tokenSequences;              //@synthesize tokenSequences=_tokenSequences - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithOwnedTokenSequences:(id)arg1 probabilities:(float*)arg2 ;
-(void)getTopKClassifications:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateClassifiedTokens:(/*^block*/id)arg1 ;
-(void)enumerateTopKClassificationsForEachString:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(SCD_Struct_RK2)topClassification;
-(NSArray *)tokenSequences;
@end

