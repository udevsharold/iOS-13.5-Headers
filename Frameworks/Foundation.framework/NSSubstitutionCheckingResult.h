/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface NSSubstitutionCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSString* _replacementString;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)range;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(id)replacementString;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 ;
@end

