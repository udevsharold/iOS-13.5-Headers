/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CRRegex : NSObject {

	NSArray* _supportedRegularExpressions;

}

@property (nonatomic,retain) NSArray * supportedRegularExpressions;              //@synthesize supportedRegularExpressions=_supportedRegularExpressions - In the implementation block
-(id)init;
-(NSArray *)supportedRegularExpressions;
-(BOOL)stringMatchesRegex:(id)arg1 ;
-(void)setSupportedRegularExpressions:(NSArray *)arg1 ;
@end

