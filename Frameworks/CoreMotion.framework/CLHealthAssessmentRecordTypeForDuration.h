/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLHealthAssessmentRecordTypeForDuration : NSObject <NSSecureCoding> {

	int _dataType;
	double _duration;

}

@property (assign) double duration;              //@synthesize duration=_duration - In the implementation block
@property (assign) int dataType;                 //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(int)dataType;
-(void)setDuration:(double)arg1 ;
-(void)setDataType:(int)arg1 ;
@end

