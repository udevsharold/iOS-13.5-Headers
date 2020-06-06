/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKRequestToOperationClassMapping.h>

@class NSArray, NSString;

@interface CRKClassNameSubstitutionRequestToOperationClassMapper : NSObject <CRKRequestToOperationClassMapping> {

	NSArray* mAllowedPrefixes;
	NSString* mOperationPrefix;

}
-(id)init;
-(id)initWithAllowedRequestPrefixes:(id)arg1 operationPrefix:(id)arg2 ;
-(id)stringByApplyingOperationSuffixToString:(id)arg1 ;
-(id)stringByApplyingOperationPrefixToString:(id)arg1 ;
-(id)prefixForString:(id)arg1 ;
-(Class)operationClassForRequest:(id)arg1 ;
@end

