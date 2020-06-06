/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface MSVCLICommand : NSObject {

	NSDictionary* _cachedOptionsDictionary;
	NSString* _name;
	NSArray* _options;

}

@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSDictionary * optionsDictionary; 
-(id)init;
-(id)description;
-(NSString *)name;
-(NSArray *)options;
-(NSDictionary *)optionsDictionary;
-(id)initWithName:(id)arg1 options:(id)arg2 ;
-(BOOL)containsOption:(id)arg1 ;
-(id)valueForOption:(id)arg1 ;
@end

