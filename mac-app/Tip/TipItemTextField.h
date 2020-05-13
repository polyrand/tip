//
//  TipItemTextField.h
//  tip
//
//  Created by Tanin Na Nakorn on 12/29/19.
//  Copyright © 2019 Tanin Na Nakorn. All rights reserved.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@interface TipItemTextField : NSTextField

@property (nonatomic, retain) NSLayoutConstraint* widthConstraint;
@property (nonatomic, retain) NSLayoutConstraint* heightConstraint;

@end

NS_ASSUME_NONNULL_END
