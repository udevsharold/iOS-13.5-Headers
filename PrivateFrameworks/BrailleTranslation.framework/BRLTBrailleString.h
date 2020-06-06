/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSArray;

@interface BRLTBrailleString : NSObject <NSCopying> {

	NSMutableArray* _brailleChars;

}

@property (nonatomic,readonly) NSString * unicode; 
@property (nonatomic,readonly) NSArray * brailleChars; 
@property (nonatomic,readonly) unsigned long long length; 
+(id)brfToUnicode:(id)arg1 ;
+(id)brfTable;
+(id)unicodeToBestEffortBrf:(id)arg1 ;
+(BOOL)isValidBRF:(id)arg1 ;
-(id)init;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)unicode;
-(id)initWithBrailleChars:(id)arg1 ;
-(id)initWithUnicode:(id)arg1 ;
-(id)bestEffortBrf;
-(NSArray *)brailleChars;
-(BOOL)isEqualToBrailleString:(id)arg1 ;
-(id)initWithBrf:(id)arg1 ;
@end

