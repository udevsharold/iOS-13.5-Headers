/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface LSRegistrationInfo : NSObject <NSSecureCoding, NSMutableCopying> {

	unsigned version;
	unsigned action;
	unsigned options;
	unsigned itemFlags;
	unsigned containerUnit;
	unsigned bundleUnit;
	unsigned bundleClass;
	unsigned long long inoBundle;
	unsigned long long inoExec;
	double contentModDate;

}
+(BOOL)supportsSecureCoding;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

