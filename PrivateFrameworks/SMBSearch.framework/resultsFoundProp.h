/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WspPropertyProtocol.h>

@class cdbProp, cbaseVariant;

@interface resultsFoundProp : NSObject <WspPropertyProtocol> {

	cdbProp* _cProps;
	cbaseVariant* _variant;

}

@property (retain) cdbProp * cProps;                    //@synthesize cProps=_cProps - In the implementation block
@property (retain) cbaseVariant * variant;              //@synthesize variant=_variant - In the implementation block
-(id)initWithInt:(int)arg1 ;
-(cbaseVariant *)variant;
-(void)setVariant:(cbaseVariant *)arg1 ;
-(unsigned)propertyID;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(cdbProp *)cProps;
-(void)setCProps:(cdbProp *)arg1 ;
@end

