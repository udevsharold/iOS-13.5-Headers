/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSArray;

@interface SFNavigationBarAccessoryButtonArrangement : NSObject {

	NSSet* _allButtonTypes;
	NSArray* _trailingButtonTypes;
	NSArray* _leadingButtonTypes;

}

@property (nonatomic,readonly) NSArray * trailingButtonTypes;              //@synthesize trailingButtonTypes=_trailingButtonTypes - In the implementation block
@property (nonatomic,readonly) NSArray * leadingButtonTypes;               //@synthesize leadingButtonTypes=_leadingButtonTypes - In the implementation block
-(id)description;
-(id)initWithLeadingButtonTypes:(id)arg1 trailingButtonTypes:(id)arg2 ;
-(BOOL)containsButtonType:(long long)arg1 ;
-(NSArray *)trailingButtonTypes;
-(void)enumerateButtonTypesFromEdge:(unsigned long long)arg1 withLayoutDirection:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)leadingButtonTypes;
@end

